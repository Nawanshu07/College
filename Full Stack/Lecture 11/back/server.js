const express = require("express");
const bcrypt = require("bcryptjs");
const jwt = require("jsonwebtoken");
const cors = require("cors");

const app = express();
app.use(express.json());
app.use(cors());

const SECRET = "mysecretkey";

/* Dummy User */
const user = {
  email: "test@email.com",
  password: bcrypt.hashSync("1234", 10)
};

/* Login API */
app.post("/login", (req, res) => {
  const { email, password } = req.body;

  if (email !== user.email) {
    return res.status(401).send("Invalid Email");
  }

  const valid = bcrypt.compareSync(password, user.password);

  if (!valid) {
    return res.status(401).send("Invalid Password");
  }

  const token = jwt.sign({ email }, SECRET, { expiresIn: "1h" });

  res.json({ token });
});

/* Middleware to protect route */
function authenticate(req, res, next) {
  const token = req.headers.authorization;
  if (!token) return res.status(403).send("Access Denied");

  try {
    jwt.verify(token, SECRET);
    next();
  } catch {
    res.status(401).send("Invalid Token");
  }
}

/* Protected Route */
app.get("/dashboard", authenticate, (req, res) => {
  res.send("Welcome to Dashboard");
});

app.listen(3000, () => {
  console.log("Server running at http://localhost:3000");
});
