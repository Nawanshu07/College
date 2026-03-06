import { useEffect, useState } from "react";
import axios from "axios";

function Dashboard() {
  const [message, setMessage] = useState("");

  useEffect(() => {
    const token = localStorage.getItem("token");

    axios.get("http://localhost:3000/dashboard", {
      headers: {
        Authorization: token
      }
    })
    .then(res => setMessage(res.data.message))
    .catch(() => setMessage("Unauthorized"));
  }, []);

  return (
    <div>
      <h2>Dashboard</h2>
      <p>{message}</p>
    </div>
  );
}

export default Dashboard;