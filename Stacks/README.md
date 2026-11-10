# 📚 Stacks

This folder contains my implementations and practice programs for the **Stack Data Structure** in C++.

The goal is to understand how stacks work internally and implement their operations from scratch using different approaches.

---

## 📌 Topics Covered

### Stack Basics
- Stack representation
- Stack initialization
- Push operation
- Pop operation
- Peek / Top operation
- Checking if stack is empty
- Checking if stack is full
- Displaying stack elements

### Stack Implementations
- Stack using Arrays
- Stack using Linked Lists

### Applications of Stack
- Parentheses matching
- Expression evaluation
- Infix to Postfix
- Infix to Prefix
- Postfix evaluation
- Prefix evaluation
- Reversing data using a stack

---

## 🧠 Stack Concept

A stack follows the **LIFO (Last In, First Out)** principle.

```text
        ┌───────┐
        │   40  │ ← TOP
        ├───────┤
        │   30  │
        ├───────┤
        │   20  │
        ├───────┤
        │   10  │
        └───────┘
```

The element inserted last is the first element removed.

### Basic Operations

```text
Push → Insert an element
Pop  → Remove the top element
Peek → View the top element
```

---

## ⏱️ Complexity

| Operation | Array Stack | Linked List Stack |
|---|---:|---:|
| Push | O(1) | O(1) |
| Pop | O(1) | O(1) |
| Peek | O(1) | O(1) |
| Search | O(n) | O(n) |
| Display | O(n) | O(n) |

---

## 📂 Folder Structure

```text
Stacks/
│
├── array/
│   ├── stack.cpp
│   └── operations.cpp
│
├── linked_list/
│   └── stack.cpp
│
├── applications/
│   ├── parentheses.cpp
│   ├── infix_to_postfix.cpp
│   └── expression_evaluation.cpp
│
└── README.md
```

The exact structure may change as more implementations are added.

---

## 🚀 Progress

- [x] Stack basics
- [x] Push
- [x] Pop
- [x] Peek
- [x] Stack using Array
- [x] Stack using Linked List
- [ ] Parentheses Matching
- [ ] Infix to Postfix
- [ ] Infix to Prefix
- [ ] Postfix Evaluation
- [ ] Prefix Evaluation
- [ ] Stack-based Problem Solving

---

## 🛠️ Language

**C++**

All implementations are written from scratch for learning and practice.

---

## 🔗 Relationship with Other Data Structures

Stacks are closely connected with:

```text
Stack
 ↓
Recursion
 ↓
Expression Evaluation
 ↓
Backtracking
 ↓
DFS
 ↓
Graphs & Trees
```

Understanding stacks also helps in understanding how **function calls and recursion are managed using the call stack**.

---

## 🎯 Goal

Build a strong understanding of stacks by implementing their operations from scratch, understanding their LIFO behavior, and applying them to real algorithmic problems.
