import express from "express";
import fs from "fs";
import cors from "cors";
import bodyParser from "body-parser";
import { resolve } from "path";

const app = express();
const port = 3001;

app.use(express.json());

app.use(
  bodyParser.urlencoded({
    extended: true,
  })
);
app.use(cors());

let data = [];
data = fs.readFileSync("./data/data.json", "utf-8");

app.get("/", (req, res) => {
  res.send(data);
});

app.post("/addTask", (req, res) => {
  const addObj = {
    "id": JSON.parse(data).length + 1,
    "task": req.body.todoName,
    "complete": false,
  };
  data = JSON.parse(data);
  data.push(addObj);
  fs.promises
    .writeFile(resolve("./data/data.json"), JSON.stringify(data, undefined, 2))
    .then(() => res.send(data))
});

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`);
});
