// import { console } from "inspector";
// import FoodModel from "../models/FoodModel.js";
// import fs from 'fs';

// //Adding food items to database

// const addFood = async(req,res) =>{

//   const imageName = req.file.filename;    

//   const food = new FoodModel({
//     name:req.body.name,
//     description:req.body.description,
//     price:req.body.price,
//     category:req.body.category,
//     image:imageName,
//   });

//   try {
//     await food.save();
//     res.json({success:true, message:"Food Added to Database"})
    
//   } catch (error) {
//     console.log("error");
//     res.json({success:false, message:"Food is not Added to Database"})
    
//   }
// }

// //Display all food from database
// const foodList=async(req,res)=>{
//       try {
//         const foods = await FoodModel.find({});
//         res.json({success:true, data:foods})
//       } catch (error) {
//         console.log("error");
//         res.json({success:false, message:"Opps! Error"})
//       }
// }

// //Removing food from database
// const removeFood=async(req,res)=>{
//   try {
//     const food = await FoodModel.findById(req.body.id);
//     fs.unlink(`uploads/${food.image}`,()=>{})
//     await FoodModel.findByIdAndDelete(req.body.id);
//     res.json({success:true, message:"Food is Removed"})

//   } catch (error) {
//     console.log("error");
//     res.json({success:false, message:"Food is not removed!"})
//   }
// }

// export {addFood,foodList,removeFood};


import FoodModel from "../models/FoodModel.js";
import fs from "fs";

// Adding food items to the database
const addFood = async (req, res) => {
  // Check if file is uploaded
  if (!req.file) {
    return res.status(400).json({ success: false, message: "No file uploaded" });
  }

  const imageName = req.file.filename;  

  const food = new FoodModel({
    name: req.body.name,
    description: req.body.description,
    price: req.body.price,
    category: req.body.category,
    image: imageName,  
  });

  try {
    await food.save();
    res.json({ success: true, message: "Food added to database" });
  } catch (error) {
    console.error("Error:", error);
    res.status(500).json({ success: false, message: "Food is not added to the database" });
  }
};

// Display all food from the database
const foodList = async (req, res) => {
  try {
    const foods = await FoodModel.find({});
    res.json({ success: true, data: foods });
  } catch (error) {
    console.error("Error:", error);
    res.json({ success: false, message: "Oops! Error" });
  }
};

// Removing food from the database
const removeFood = async (req, res) => {
  try {
    const food = await FoodModel.findById(req.body.id);

    // Delete the image from the uploads folder
    fs.unlink(`uploads/${food.image}`, (err) => {
      if (err) {
        console.error("Error deleting image:", err);
      }
    });

    // Remove the food from the database
    await FoodModel.findByIdAndDelete(req.body.id);

    res.json({ success: true, message: "Food is removed" });
  } catch (error) {
    console.error("Error:", error);
    res.json({ success: false, message: "Food is not removed!" });
  }
};

export { addFood, foodList, removeFood };
