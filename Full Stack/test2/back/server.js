const express = require("express");
const bcrypt = require("bcryptjs");
const jwt = require("jsonwebtoken");
const cors = require("cors");

const app = express();          // 🔥 MUST exist before using app
const PORT = 3000;
const SECRET = "mysecretkey";

app.use(express.json());
app.use(cors());

/* Dummy user with hashed password */
const user = {
  email: "test@email.com",
  password: bcrypt.hashSync("1234", 10)
};

/* =========================
   LOGIN ROUTE
========================= */
app.post("/login", (req, res) => {
  const { email, password } = req.body;

  // Check email
  if (email !== user.email) {
    return res.status(401).json({ message: "Invalid Email" });
  }

  // Compare password
  const validPassword = bcrypt.compareSync(password, user.password);

  if (!validPassword) {
    return res.status(401).json({ message: "Invalid Password" });
  }

  // Generate JWT
  const token = jwt.sign({ email: user.email }, SECRET, {
    expiresIn: "1h"
  });

  res.json({ token });
});

/* =========================
   AUTH MIDDLEWARE
========================= */
function authenticate(req, res, next) {
  const token = req.headers.authorization;

  if (!token) {
    return res.status(403).json({ message: "Access Denied" });
  }

  try {
    jwt.verify(token, SECRET);
    next();
  } catch (error) {
    res.status(401).json({ message: "Invalid Token" });
  }
}

/* =========================
   PROTECTED ROUTE
========================= */
app.get("/dashboard", authenticate, (req, res) => {
  res.json({ message: "Welcome to Dashboard" });
});

/* =========================
   START SERVER
========================= */
app.listen(PORT, () => {
  console.log(`Server running at http://localhost:${PORT}`);
});