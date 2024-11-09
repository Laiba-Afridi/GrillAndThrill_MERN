import express from "express"
import cors from "cors"
import { connection } from "./config/db.js"


//app config
const app=express()
const port = 4000

//middleware
app.use(express.json())
app.use(cors())

//database connection
connection();



app.get("/", (req,res)=>{
   res.send("api working")
})


app.listen(port,()=>{
    console.log(`Server Started on http://localhost:${port}`)
})

