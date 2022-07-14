import React, { useEffect, useState } from "react";
import Header from "./Header.js";
import ToDoList from "./ToDoList.js";
import ToDoForm from "./ToDoForm.js";

function App() {
  // const URL = ;

  const [toDoList, setToDoList] = useState([]);

  useEffect(() => {
    fetch("http://localhost:3001", {
      headers: {
        "Content-type": "application/json",
        Accept: "application/json",
      },
    })
      .then((resp) => resp.json())
      .then(setToDoList);
  }, []);

  const handleToggle = (id) => {
    let mapped = toDoList.map((task) => {
      return task.id === Number(id)
        ? { ...task, complete: !task.complete }
        : { ...task };
    });
    setToDoList(mapped);
  };

  const handleFilter = () => {
    let filtered = toDoList.filter((task) => {
      return !task.complete;
    });
    setToDoList(filtered);
  };

  const addTask = (userInput) => {
    const sendingData = {
      todoName: userInput,
    };
    fetch(`http://localhost:3001/addTask`, {
      method: "POST",
      body: JSON.stringify(sendingData),
      headers: {
        "Content-type": "application/json; charset=UTF-8",
      },
    })      
    .then((resp) => resp.json())
    .then(setToDoList);
  };

  return (
    <div className="App">
      <Header />
      <ToDoList
        toDoList={toDoList}
        handleToggle={handleToggle}
        handleFilter={handleFilter}
      />
      <ToDoForm addTask={addTask} />
    </div>
  );
}

export default App;
