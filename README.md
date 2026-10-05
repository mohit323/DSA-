# DSA — Data Structures & Algorithms

A structured collection of my **Data Structures and Algorithms** implementations, problem-solving practice, and LeetCode solutions in **C++**.

This repository documents my progress from fundamental data structures to advanced algorithmic techniques, with an emphasis on understanding how things work internally rather than only solving problems using built-in libraries.

---

## 📌 About

I am building this repository as a long-term reference for my DSA preparation.

The goal is to:

- Build strong fundamentals in Data Structures and Algorithms
- Implement data structures from scratch
- Understand the underlying logic and complexity
- Practice problem-solving through LeetCode and other problems
- Maintain clean, reusable implementations
- Track my progress throughout my DSA journey

---

## 🛠️ Language

- **C++**

I use C++ as my primary language for DSA because it provides direct control over memory, pointers, data structures, and the STL while still being practical for competitive programming and technical interviews.

---

# 📚 Topics Covered

The repository is organized progressively from fundamental concepts to advanced algorithms.

### 1. Arrays
- Array operations
- Array ADT
- Searching
- Insertion & deletion
- Merging
- Union & intersection
- Two Pointers
- Sliding Window
- Array-based problem solving

### 2. Strings
- String manipulation
- Character frequency
- String searching
- Prefix-based problems
- String-based LeetCode problems

### 3. Hashing
- Hash tables
- Hashing techniques
- Frequency counting
- Hash-based problem solving
- `unordered_map`
- `unordered_set`

### 4. Linked Lists
- Singly Linked List
- Insertion & deletion
- Searching
- Reversal
- Sorted insertion
- Duplicate removal
- Merging lists
- Circular Linked List
- Cycle detection
- Floyd's Cycle Detection Algorithm

### 5. Stack
- Stack using Arrays
- Stack using Linked Lists
- Push / Pop / Peek
- Stack-based problems

### 6. Queue
- Linear Queue
- Linked Queue
- Circular Queue
- Enqueue / Dequeue
- Queue implementation from scratch

### 7. Recursion
- Basic recursion
- Recursive problem solving
- Recursive tree tracing
- Mutual recursion
- Recursive mathematical problems

### 8. Trees
- Tree terminology
- Binary Trees
- Binary Tree representation
- Array representation
- Linked representation
- Tree construction
- Tree traversals
- Recursive traversals
- Iterative traversals
- Binary Tree properties
- Tree height and node relationships

### 9. Binary Search Trees
- BST implementation
- Searching
- Insertion
- Deletion
- Traversals
- BST properties

### 10. AVL Trees
- Balanced Binary Search Trees
- Rotations
- LL Rotation
- RR Rotation
- LR Rotation
- RL Rotation
- Insertion and balancing

### 11. Heaps
- Min Heap
- Max Heap
- Heap operations
- Heapify
- Priority Queue concepts
- Heap Sort

### 12. Sorting
- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Heap Sort
- Counting / Radix-based techniques where applicable

### 13. Graphs
- Graph representation
- Adjacency Matrix
- Adjacency List
- BFS
- DFS
- Connected Components
- Graph traversal problems
- Shortest Path Algorithms
- Minimum Spanning Trees

### 14. Asymptotic Analysis
- Time Complexity
- Space Complexity
- Big-O
- Big-Theta
- Big-Omega
- Best / Average / Worst Case Analysis

### 15. Divide and Conquer
- Divide and Conquer paradigm
- Recursive decomposition
- Merge Sort
- Quick Sort
- Related problem-solving techniques

### 16. Greedy Algorithms
- Greedy strategy
- Activity Selection
- Fractional Knapsack
- Scheduling problems
- Minimum Spanning Tree algorithms
- Other greedy techniques

### 17. Dynamic Programming
- Memoization
- Tabulation
- 1D DP
- 2D DP
- Subsequence problems
- Knapsack problems
- Optimization problems

### 18. Backtracking
- Backtracking paradigm
- Decision trees
- Permutations
- Combinations
- N-Queens
- Constraint-based problems

---

# 🧩 Problem Solving

Alongside implementations, this repository contains solutions to algorithmic problems from platforms such as:

- **LeetCode**
- Competitive programming platforms
- Practice problems
- Custom implementations

The problems are organized according to the concepts they reinforce.

---

# 📊 Progress

| Topic | Status |
|---|:---:|
| Arrays | ✅ |
| Strings | ✅ |
| Hashing | ✅ |
| Two Pointers | ✅ |
| Sliding Window | ✅ |
| Linked Lists | ✅ |
| Stack | ✅ |
| Queue | ✅ |
| Recursion | ✅ |
| Trees | 🔄 |
| Binary Search Trees | ⏳ |
| AVL Trees | ⏳ |
| Heaps | ⏳ |
| Sorting | ⏳ |
| Graphs | ⏳ |
| Asymptotic Analysis | ⏳ |
| Divide & Conquer | ⏳ |
| Greedy | ⏳ |
| Dynamic Programming | ⏳ |
| Backtracking | ⏳ |

**Legend**

- ✅ Completed
- 🔄 Currently working
- ⏳ Upcoming

---

# 📁 Repository Structure

```text
DSA/
│
├── Arrays/
│   ├── README.md
│   ├── implementations/
│   └── problems/
│
├── Strings/
│   ├── README.md
│   ├── implementations/
│   └── problems/
│
├── Hashing/
│   ├── README.md
│   ├── implementations/
│   └── problems/
│
├── Linked-List/
│   ├── README.md
│   ├── Singly/
│   └── Circular/
│
├── Stack/
│   ├── README.md
│   ├── Array/
│   └── Linked-List/
│
├── Queue/
│   ├── README.md
│   ├── Linear/
│   ├── Linked/
│   └── Circular/
│
├── Recursion/
│   ├── README.md
│   └── problems/
│
├── Trees/
│   ├── README.md
│   ├── Binary-Tree/
│   └── problems/
│
├── Binary-Search-Tree/
├── AVL-Tree/
├── Heap/
├── Sorting/
├── Graphs/
├── Asymptotic-Analysis/
├── Divide-and-Conquer/
├── Greedy/
├── Dynamic-Programming/
├── Backtracking/
│
└── README.md
```

> The structure may evolve as the repository grows.

---

# 🧠 Approach

For each major topic, I try to follow this progression:

```text
Concept
   ↓
Understand the theory
   ↓
Implement from scratch
   ↓
Analyze complexity
   ↓
Solve problems
   ↓
Optimize
   ↓
Document
```

The focus is not just on getting the correct output.

I want to understand **why the algorithm works, what it costs, and when it should be used.**

---

# ⏱️ Complexity

Each implementation is analyzed using:

### Time Complexity

```text
O(1)      Constant
O(log n)  Logarithmic
O(n)      Linear
O(n log n)
O(n²)     Quadratic
O(2ⁿ)     Exponential
O(n!)     Factorial
```

### Space Complexity

Auxiliary space is considered separately where relevant, especially for:

- Recursion
- Trees
- Graphs
- Dynamic Programming
- Additional data structures

---

# 🎯 Goals

The long-term goal of this repository is to develop strong enough DSA fundamentals to confidently handle:

- Technical interviews
- Competitive programming
- Placement coding rounds
- Algorithmic problem solving
- Large-scale software engineering problems

---

# 📈 Learning Philosophy

I am prioritizing **depth over speed**.

A topic is considered properly learned when I can:

1. Explain the underlying concept.
2. Implement it without blindly copying code.
3. Analyze its time and space complexity.
4. Identify where it is useful.
5. Solve unfamiliar problems using the concept.

---

# 🔄 Repository Progress

This repository is actively maintained.

New implementations, problem solutions, optimizations, and notes will be added as I progress through the DSA roadmap.

### Current Focus

**Trees → BST → AVL → Heap → Sorting → Graphs → Advanced Algorithms**

---

## 👨‍💻 Author

**Mohit Kunwar**

CSE — Artificial Intelligence & Machine Learning

SRM Institute of Science and Technology

---

⭐ This repository represents my ongoing DSA journey — from understanding the fundamentals to solving increasingly complex algorithmic problems.
