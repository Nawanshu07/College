const express = require("express");
const app = express();
const port = 3000;

app.use(express.json());

const users = [];

let nextId = users.length > 0
  ? Math.max(...users.map(u => u.id)) + 1
  : 1;

app.post("/users/add", (req, res) => {
  const user = {
    id: nextId++,
    name: req.body.name
  };

  users.push(user);
  res.status(201).json(user);
});

app.get("/users", (req, res) => {
  res.json(users);
});

app.put("/users/:id", (req, res) => {
  const id = parseInt(req.params.id);
  const user = users.find(u => u.id === id);

  if (!user) {
    return res.status(404).json({ message: "User not found" });
  }

  user.name = req.body.name;
  res.json(user);
});

app.delete("/users/:id", (req, res) => {
  const id = parseInt(req.params.id);
  const index = users.findIndex(u => u.id === id);

  if (index === -1) {
    return res.status(404).json({ message: "User not found" });
  }

  users.splice(index, 1);
  res.json({ message: "User deleted" });
});

app.listen(port, () => {
  console.log(`Server running on port ${port}`);
});
