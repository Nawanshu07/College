import { useState } from "react";

function App() {
  const [a, setA] = useState("");
  const [b, setB] = useState("");
  const [result, setResult] = useState(null);
  const [error, setError] = useState("");

  const BACKEND_URL = "https://deploy-1-0cl2.onrender.com";

  const handleDivide = async () => {
    try {
      setError("");
      setResult(null);

      const response = await fetch(
        `${BACKEND_URL}/api/divide?a=${Number(a)}&b=${Number(b)}`
      );

      const data = await response.json();

      if (!response.ok) {
        throw new Error(data.message || "Something went wrong");
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
          type="number"
          placeholder="Enter value A"
          value={a}
          onChange={(e) => setA(e.target.value)}
          style={{ marginRight: "10px" }}
        />

        <input
          type="number"
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