function addTask() {
    const taskInput = document.getElementById('taskInput');
    const taskText = taskInput.value.trim();

    if (taskText !== '') {
        const taskList = document.getElementById('taskList');
        const li = document.createElement('li');
        li.textContent = taskText;
        taskList.appendChild(li);
        taskInput.value = '';
    }
}const taskInput = document.getElementById('taskInput');
const prioritySelect = document.getElementById('priority');
const taskList = document.getElementById('taskList');

const li = document.createElement('li');
li.textContent = taskText;
li.classList.add(priority); // Add the priority class here
taskList.appendChild(li);

function addTask() {
    const taskText = taskInput.value.trim();
    const priority = prioritySelect.value;

    if (taskText !== '') {
        const task = {
            text: taskText,
            priority: priority,
            completed: false
        };

        const tasks = JSON.parse(localStorage.getItem('tasks')) || [];
        tasks.push(task);
        localStorage.setItem('tasks', JSON.stringify(tasks));

        const li = document.createElement('li');
        li.classList.add(priority.toLowerCase()); // Add the priority class here
        li.innerHTML = `
            <span>${taskText}</span>
            <span class="priority">${priority}</span>
            <button onclick="editTask(${tasks.length - 1})">Edit</button>
            <button onclick="deleteTask(${tasks.length - 1})">Delete</button>
            <input type="checkbox" onclick="toggleComplete(${tasks.length - 1})">
        `;
        taskList.appendChild(li);

        taskInput.value = '';
    }
}

function loadTasks() {
  const tasks = JSON.parse(localStorage.getItem('tasks')) || [];
  tasks.forEach((task, index) => {
    // ... code to add each task to the DOM, similar to the addTask function
  });
}

function editTask(index) {
  // ... code to replace the task with an input field for editing
}

function deleteTask(index) {
  // ... code to remove the task from the DOM and local storage
}

function toggleComplete(index) {
  // ... code to toggle the task's completed status and update the DOM and local storage
}

loadTasks();
