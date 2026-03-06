const express = require("express");
const mongoose = require("mongoose");
const mysql = require("mysql");

const app = express();
app.use(express.json());

/* MongoDB */
mongoose.connect("mongodb://127.0.0.1:27017/testDB");

const User = mongoose.model("User",
  new mongoose.Schema({ name: String, email: String })
);

/* Router middleware */
const router = express.Router();
router.use((req, res, next) => next());

router.post("/users", async (req, res) => {
  res.send(await new User(req.body).save());
});

router.get("/users", async (req, res) => {
  res.send(await User.find());
});

app.use("/api", router);

/* MySQL */
const db = mysql.createConnection({ host:"localhost", user:"root", password:"", database:"college" });
db.connect();

app.get("/students", (req, res) => {
  db.query("SELECT * FROM students", (err, result) => res.send(result));
});

/* Error middleware */
app.use((err, req, res, next) => {
  res.status(500).send("Error");
});

app.listen(3000, () => {
  console.log("Server running at http://localhost:3000");
});
