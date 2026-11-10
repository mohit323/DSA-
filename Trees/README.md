# 🌳 Trees

This folder contains my implementations and practice programs for **Tree Data Structures** in C++.

The goal is to understand how trees work internally, implement their operations from scratch, and build a strong foundation for advanced data structures and algorithms.

---

## 📌 Topics Covered

### Binary Tree
- Tree representation
- Node creation
- Insertion
- Traversals
  - Inorder
  - Preorder
  - Postorder
  - Level Order
- Searching
- Height of a tree
- Counting nodes
- Counting leaf nodes

### Binary Search Tree (BST)
- BST insertion
- BST searching
- Finding minimum and maximum
- Finding inorder predecessor/successor
- Deletion
- Tree traversals

### AVL Tree
- Height-balanced BST
- Balance factor
- LL Rotation
- RR Rotation
- LR Rotation
- RL Rotation
- Insertion
- Maintaining balance

### Advanced Trees
- 2-3 Trees
- B-Trees
- B+ Trees
- Tree balancing concepts
- Advanced tree operations

---

## 🌲 Tree Traversals

The main traversal techniques implemented in this folder are:

```text
Inorder   → Left → Root → Right
Preorder  → Root → Left → Right
Postorder → Left → Right → Root
```

For a Binary Search Tree, **inorder traversal produces the elements in sorted order**.

---

## 🧠 Learning Approach

Each implementation is written from scratch in **C++** without relying on built-in tree data structures.

The focus is on understanding:

- How nodes are connected
- Recursive tree operations
- Pointer manipulation
- Tree properties
- Time and space complexity
- How balanced trees maintain efficient operations

---

## ⏱️ Complexity

| Operation | Binary Tree | BST Average | BST Worst | AVL |
|---|---:|---:|---:|---:|
| Search | O(n) | O(log n) | O(n) | O(log n) |
| Insert | O(n) | O(log n) | O(n) | O(log n) |
| Delete | O(n) | O(log n) | O(n) | O(log n) |
| Traversal | O(n) | O(n) | O(n) | O(n) |

`n` = number of nodes.

---

## 📂 Folder Structure

```text
Trees/
│
├── BinaryTree/
│   ├── insertion.cpp
│   ├── traversal.cpp
│   └── operations.cpp
│
├── BST/
│   ├── insertion.cpp
│   ├── search.cpp
│   ├── deletion.cpp
│   └── traversal.cpp
│
├── AVL/
│   ├── insertion.cpp
│   ├── rotations.cpp
│   └── avl.cpp
│
└── README.md
```

The exact structure may change as more implementations are added.

---

## 🚀 Progress

- [x] Binary Tree basics
- [x] Tree Traversals
- [x] Binary Search Tree
- [x] BST operations
- [x] AVL Tree basics
- [x] AVL rotations
- [ ] 2-3 Trees
- [ ] B-Trees
- [ ] B+ Trees
- [ ] Advanced tree problems
- [ ] Tree-based problem solving

---

## 🛠️ Language

**C++**

All implementations are written for learning and practice purposes.

---

## 📚 Next

After completing Trees, the planned progression is:

```text
Trees
  ↓
BST
  ↓
AVL
  ↓
Heaps
  ↓
Sorting
  ↓
Graphs
  ↓
Greedy
  ↓
Dynamic Programming
  ↓
Backtracking
```

---

## 🎯 Goal

Build a strong understanding of tree-based data structures by implementing them from scratch and solving problems using them.
