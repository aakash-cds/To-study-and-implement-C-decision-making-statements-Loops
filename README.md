# 🔁 Experiment 6 – C++ Decision Making Statements with Loops

## 🎯 Aim
To study and implement **looping constructs** in C++ using:
- `for` loop
- `while` loop
- `do-while` loop

---

## 📘 Theory

Loops are used in programming to execute a block of code **repeatedly** until a specified condition is met. These are essential for tasks involving repetition, such as printing sequences, calculating sums, or iterating over data.

---

### 🔹 1. `for` Loop
Used when the number of iterations is known.

**Syntax:**
```cpp
for (initialization; condition; update) {
    // code to execute repeatedly
}
```

✔️ All loop parameters are declared in one line.

---

### 🔹 2. `while` Loop
Used when the number of iterations is not known in advance. It checks the condition **before** each iteration.

**Syntax:**
```cpp
while (condition) {
    // code to execute while condition is true
}
```

---

### 🔹 3. `do-while` Loop
Similar to the `while` loop but checks the condition **after** executing the loop body at least once.

**Syntax:**
```cpp
do {
    // code to execute
} while (condition);
```

---

## ⚙️ Procedure

1. Start your C++ program using `#include <iostream>` and `using namespace std;`.
2. Use variables and input mechanisms (like `cin`) to collect necessary values.
3. Implement:
   - `for` loop: for counting, summation, or printing a series.
   - `while` loop: when loop condition depends on user input or state.
   - `do-while` loop: for menu-driven or user-repeating inputs.
4. Compile and run the program to observe loop execution.
5. Modify loop conditions or counters to experiment with iterations.

---

## 🧪 Example Use-Cases

- Print numbers from 1 to 10 (`for` loop)
- Sum of digits of a number (`while` loop)
- Repeat a menu until user exits (`do-while` loop)

---

## 📌 Key Concepts Covered

- Loop entry vs exit condition checks
- Controlled repetition using counter variables
- Importance of increment/decrement operations
- Common logical errors: infinite loops, off-by-one errors

---

## 🎓 Learning Outcomes

- Learned the difference between `for`, `while`, and `do-while` loops
- Understood when to use each loop construct based on the situation
- Gained hands-on experience writing repetition logic in C++
- Developed the ability to detect and prevent common looping mistakes

---

## 📝 Experiment Summary

This experiment introduced **looping constructs** in C++. Loops are fundamental to writing efficient programs that require repetition, such as calculations, input handling, and iterative problem solving. Mastery of loops enhances both logical thinking and coding efficiency.

---
