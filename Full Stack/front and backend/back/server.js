// server.js
const express = require("express");
const cors = require("cors");
const app = express();
const PORT = 5000;
// Middleware
app.use(cors()); // Enable CORS
app.use(express.json()); // Parse JSON body
// GET API
app.get("/api/message", (req, res) => {
    res.json({
        success: true,
        message: "Hello World! from Backend",
        time: new Date().toLocaleTimeString()
    });
});
// POST API
app.post("/api/data", (req, res) => {
    console.log("Received from React:", req.body);
    res.json({
        success: true,
        receivedData: req.body
    });
});

app.listen(PORT, () => {
    console.log(`Server running at http://localhost:${PORT}`);
});