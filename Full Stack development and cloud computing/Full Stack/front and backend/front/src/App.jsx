import { useEffect, useState } from "react";

export default function App() {
  const [data, setData] = useState(null);
  const [loading, setLoading] = useState(true);
  const [error, setError] = useState("");
  const [response, setResponse] = useState(null);

  useEffect(() => {
    fetch("http://localhost:5000/api/message")
      .then(r => r.json())
      .then(d => (setData(d), setLoading(false)))
      .catch(() => (setError("Unable to fetch data from backend"), setLoading(false)));
  }, []);

  const sendData = () =>
    fetch("http://localhost:5000/api/data", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify({
        name: "Student",
        program: "BCA",
        topic: "React with Vite & Express",
      }),
    })
      .then(r => r.json())
      .then(setResponse);

  return (
    <div style={{ padding: 20 }}>
      {loading && <p>Loading...</p>}
      {error && <p style={{ color: "red" }}>{error}</p>}
      {data && (
        <>
          <p><b>Message:</b> {data.message}</p>
          <p><b>Time:</b> {data.time}</p>
        </>
      )}
      <button onClick={sendData}>Send Data to Backend</button>
      {response && <pre>{JSON.stringify(response, null, 2)}</pre>}
    </div>
  );
}
