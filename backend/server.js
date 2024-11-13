import express from "express"
import cors from "cors"
import { connection } from "./config/db.js"
import FoodRoute from "./routes/FoodRoute.js"
import userRouter from "./routes/UserRoute.js"
import "dotenv/config"

//app config
const app=express()
const port = 4000

//middleware
app.use(express.json())
app.use(cors())

//database connection
connection();

//api endpoint
app.use('/api/food',FoodRoute);
app.use("/images", express.static("uploads"))
app.use("/api/user", userRouter)

app.use(cors({ origin: "http://localhost:4000" }));

app.get("/", (req,res)=>{
   res.send("api working")
})


app.listen(port,()=>{
    console.log(`Server Started on http://localhost:${port}`)
})

