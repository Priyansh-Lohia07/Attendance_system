# Attendance Management System (C++)

A simple **console-based Attendance Management System** developed in **C++** using **Object-Oriented Programming (OOP)** concepts. This project allows users to manage employee information and maintain attendance records through an interactive menu-driven interface.

---

## 📌 Features

* Add new employees
* Display all employee records
* Mark employee attendance
* View attendance records
* Simple menu-driven interface
* Uses C++ STL (`vector`) for data storage
* Demonstrates OOP concepts such as:

  * Classes and Objects
  * Constructors
  * Encapsulation
  * Vectors (STL)

---

## 🛠 Technologies Used

* C++
* Standard Template Library (STL)
* Object-Oriented Programming (OOP)

---

## 📂 Project Structure

```
Attendance-Management-System/
│
├── attendance.cpp      // Main source code
└── README.md           // Project documentation
```

---

## 🏗 Classes Used

### 1. Employee

Stores employee information.

**Data Members**

* Employee ID
* Employee Name
* Department

**Functions**

* Display Employee Details

---

### 2. Attendance

Stores attendance details.

**Data Members**

* Employee ID
* Date
* Status (Present / Absent / Leave / Late)

**Functions**

* Display Attendance Record

---

### 3. Attendance_Manager

Acts as the controller for the system.

**Functions**

* Add Employee
* Display Employees
* Mark Attendance
* View Attendance

---

# ▶ How to Compile

Using **g++**

```bash
g++ attendance.cpp -o attendance
```

Run the program:

```bash
./attendance
```

For Windows (MinGW):

```bash
g++ attendance.cpp -o attendance.exe
attendance.exe
```

---

# 📖 How to Use the System

When the program starts, the following menu is displayed:

```
====== ATTENDANCE MANAGEMENT SYSTEM ======

1. ADD NEW EMPLOYEE
2. DISPLAY EMPLOYEES
3. MARK ATTENDANCE
4. VIEW ATTENDANCE
5. EXIT
```

### Option 1 – Add New Employee

Enter:

* Employee Name
* Employee ID
* Department

Example:

```
Enter the employee name: John
Enter the employee ID: 101
Enter the employee department: IT
```

The employee will be added to the employee list.

---

### Option 2 – Display Employees

Displays all employees stored in the system.

Example:

```
Employee ID:101
Employee Name:John
Employee Department:IT
```

If no employees exist:

```
No employee added!
```

---

### Option 3 – Mark Attendance

Enter:

* Employee ID
* Date
* Attendance Status

Example:

```
Enter employee ID:101
Enter date:25062026
Enter status:Present
```

Available statuses:

* Present
* Absent
* Leave
* Late

---

### Option 4 – View Attendance

Displays all attendance records.

Example:

```
Employee ID:101
DATE:25062026
STATUS:Present
```

If no records exist:

```
No attendance record found!
```

---

### Option 5 – Exit

Terminates the application.

```
EXITING...
```

---

# 💡 Sample Workflow

```
Start Program
       │
       ▼
Add Employee
       │
       ▼
Display Employees
       │
       ▼
Mark Attendance
       │
       ▼
View Attendance
       │
       ▼
Exit
```

---

# ⚠ Current Limitations

* Data is stored only in memory (no file storage).
* Attendance can be marked for any Employee ID without validation.
* Date is stored as an integer instead of a formatted date.
* Employee names cannot contain spaces (uses `cin >>`).
* Search, update, and delete operations are not available.
* Data is lost after the program closes.

---

# 🚀 Future Improvements

* File handling for permanent data storage.
* Search employee by ID.
* Update employee information.
* Delete employee records.
* Validate employee ID before marking attendance.
* Better date handling (DD/MM/YYYY).
* Allow names with spaces using `getline()`.
* Monthly attendance reports.
* Attendance statistics.
* Login/Admin authentication.
* Export attendance records.

---

# 📚 Learning Objectives

This project was created to practice:

* C++ Programming
* Object-Oriented Programming
* STL Vectors
* Constructors
* Menu-driven applications
* Basic data management

---

## 👨‍💻 Author

**Priyansh Lohia**

Second-Year B.Tech Student

Learning C++ and Object-Oriented Programming through practical projects.

---

## 📄 License

This project is open-source and available for educational and learning purposes.
