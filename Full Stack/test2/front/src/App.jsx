import { Routes, Route, Navigate } from "react-router-dom";
import Login from "./Login";
import Dashboard from "./Dashboard";

/* Private Route Component */
function PrivateRoute({ children }) {
  const token = localStorage.getItem("token");

  // If token exists → allow access
  // If not → redirect to login
  return token ? children : <Navigate to="/" />;
}

function App() {
  return (
    <Routes>
      {/* Login Page */}
      <Route path="/" element={<Login />} />

      {/* Protected Dashboard Page */}
      <Route
        path="/dashboard"
        element={
          <PrivateRoute>
            <Dashboard />
          </PrivateRoute>
        }
      />
    </Routes>
  );
}

export default App;