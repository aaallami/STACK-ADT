# 🧠 Stack Implementation Quiz – Lecture Activity

Welcome to the **Stack Implementation Quiz**! 🎓  

In this exercise, you'll work through a partially completed C program that demonstrates how a simple stack works using dynamic memory. Your task is to **fill in the blanks** as part of the lecture activity.

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

## 🧩 Code Blanks to Fill  
```c
s->data = (int*)malloc(STACK_CAPACITY * sizeof(int));  // Blank 1
if (s->top == STACK_CAPACITY - 1) {  // Blank 2 (Overflow check)
if (s->top == -1) {  // Blank 3 (Underflow check)
s->data[++(s->top)] = value;  // Blank 4 (Push)
return s->data[(s->top)--];  // Blank 5 (Pop)
