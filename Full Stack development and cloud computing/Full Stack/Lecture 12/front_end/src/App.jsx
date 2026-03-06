import { useState } from "react";
function App() {
  const [a, setA] = useState("");
  const [b, setB] = useState("");
  const [result, setResult] = useState(null);
  const [error, setError] = useState("");
  const handleDivide = async () => {
    try {
      setError("");
      setResult(null);
      const response = await fetch(
        `http://localhost:5000/api/divide?a=${a}&b=${b}`
      );
      const data = await response.json();
      if (!response.ok) {
        throw new Error(data.message);
      }
      setResult(data.result);
    } catch (err) {
      setError(err.message);
    }
  };
  return (
    <div style={{ padding: "40px", fontFamily: "Arial" }}>
      <h2>Division API Error Handling Demo</h2>
      <div>
        <input
          type="text"
          placeholder="Enter value A"
          value={a}
          onChange={(e) => setA(e.target.value)}
          style={{ marginRight: "10px" }}
        />
        <input
          type="text"
          placeholder="Enter value B"
          value={b}
          onChange={(e) => setB(e.target.value)}
          style={{ marginRight: "10px" }}
        />
        <button onClick={handleDivide}>
          Divide
        </button>
      </div>
      {result !== null && (
        <h3 style={{ color: "green" }}>
          Result: {result}
        </h3>
      )}
      {error && (
        <h3 style={{ color: "red" }}>
          Error: {error}
        </h3>
      )}
    </div>
  );
}
export default App;