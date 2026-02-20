const express = require("express");
const cors = require("cors");
const app = express();
app.use(cors());
app.use(express.json());
/* =========================
VALIDATION FUNCTION
========================= */
function validateInput(a, b) {
  if (!a || !b) {
    const error = new Error("Both parameters 'a' and 'b' are required.");
    error.status = 400;
    throw error;
  }
  const numA = Number(a);
  const numB = Number(b);
  if (isNaN(numA) || isNaN(numB)) {
    const error = new Error("Inputs must be valid numbers.");
    error.status = 400;
    throw error;
  }
  if (numB === 0) {
    const error = new Error("Division by zero is not allowed.");
    error.status = 400;
    throw error;
  }
  return { numA, numB };
}
/* =========================
ROUTE WITH TRY–CATCH
========================= */
app.get("/api/divide", (req, res, next) => {
  try {
    const { a, b } = req.query;
    const { numA, numB } = validateInput(a, b);
    const result = numA / numB;
    res.status(200).json({
      success: true,
      result: result
    });
  } catch (error) {
    next(error); // Pass to global error handler
  }
});
/* =========================
GLOBAL ERROR MIDDLEWARE
========================= */
app.use((err, req, res, next) => {
  console.error("Error Stack:", err.stack);
  res.status(err.status || 500).json({
    success: false,
    message: err.message || "Internal Server Error"
  });
});
/* =========================
START SERVER
========================= */
const PORT = 5000;
app.listen(PORT, () => {
  console.log(`Server running on port ${PORT}`);
});