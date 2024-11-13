import express from 'express'
import { addFood, foodList,removeFood } from '../controllers/FoodController.js';
import multer from 'multer';

//express router

const FoodRoute = express.Router();

//image Storage
const Storage = multer.diskStorage({
    destination:"uploads",
    filename:(req,file,cb)=>{
        return cb(null, `${Date.now()}${file.originalname}`)
    }

})

const upload=multer({storage:Storage});

// Route to add food with image
FoodRoute.post("/add", (req, res, next) => {
    upload.single('image')(req, res, function (err) {
        if (err instanceof multer.MulterError) {
            // A Multer error occurred when uploading
            return res.status(400).json({ success: false, message: "Multer error", error: err.message });
        } else if (err) {
            // An unknown error occurred
            return res.status(500).json({ success: false, message: "Unknown error occurred", error: err.message });
        }
        next();  // Proceed to the addFood controller if no error
    });
}, addFood);

FoodRoute.post("/add", upload.single("image"), addFood);
FoodRoute.get("/list",foodList);
FoodRoute.post("/remove",removeFood);

export default FoodRoute;
