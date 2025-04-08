# 🧠 Stack Implementation Quiz – Lecture Activity

Welcome to the **Stack Implementation Quiz**! 🎓  

In this exercise, you'll work through a partially completed C program demonstrating how a simple stack works using dynamic memory. Your task is to **fill in the blanks** during the lecture activity.

---

## 👥 Collaboration Instructions  
> 🔔 **Work in pairs if possible.**  
> Discuss each blank together, help each other understand the logic, and take turns typing. This is a learning experience, not just a coding task.  

---

## 📚 Objective  
- ✅ Understand Last-In-First-Out (LIFO) stack operations  
- ✅ Master dynamic memory allocation in C  
- ✅ Handle stack overflow/underflow conditions  
- ✅ Practice Linux-based C development  

---

## 🔧 Setup & Execution (Linux)
>1️⃣ Clone Repository
```
git clone https://github.com/YOUR_INSTRUCTOR/STACK-ADT.git
cd STACK-ADT
```

---

# 🧪 Stack Quiz Instructions

## 2️⃣ Edit Code

### Terminal Editors:

```
nano stack.c       # Simple terminal editor  
gedit stack.c &    # Graphical editor (if available)
```

----

## 3️⃣ Compile & Run
```
gcc stack.c -o stack && ./stack
```

----

## ⚠️ No Compiler?
Install the required tools with:
```
sudo apt update && sudo apt install build-essential
```
----

## ✅ Completion Checklist
- All 5 blanks were filled correctly

- Successful compilation without errors
  
 - Observed:

   - Normal push/pop operations

   - Overflow/underflow handling

---

## 💡 Bonus Challenge

- Implement **dynamic memory reallocation** when the stack overflows:
  - Instead of printing an overflow error, use `realloc()` to **double the stack capacity**
  - Update the `STACK_CAPACITY` and ensure existing elements are preserved

