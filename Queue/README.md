# 🚶 Queue

This folder contains my implementations and practice programs for the **Queue Data Structure** in C++.

The goal is to understand how queues work internally and implement their operations from scratch using different approaches.

---

## 📌 Topics Covered

### Queue Basics
- Queue representation
- Queue initialization
- Enqueue operation
- Dequeue operation
- Front operation
- Rear operation
- Checking if queue is empty
- Checking if queue is full
- Displaying queue elements

### Queue Implementations
- Queue using Arrays
- Queue using Linked Lists
- Circular Queue

### Applications of Queue
- Scheduling
- Buffer management
- Breadth First Search (BFS)
- Process management
- Real-world waiting-line systems

---

## 🧠 Queue Concept

A queue follows the **FIFO (First In, First Out)** principle.

```text id="q1"
FRONT                              REAR
  ↓                                  ↓
┌───────┬───────┬───────┬───────┐
│  10   │  20   │  30   │  40   │
└───────┴───────┴───────┴───────┘
   ↑                                  ↑
Dequeue                            Enqueue
```

The element inserted first is the first element removed.

### Basic Operations

```text id="q2"
Enqueue → Insert an element at the rear
Dequeue → Remove an element from the front
Front   → View the first element
Rear    → View the last element
```

---

## 🔄 Circular Queue

A circular queue connects the end of the queue back to the beginning.

```text id="q3"
        ┌─────────────────┐
        ↓                 │
    [ 10 ][ 20 ][ 30 ][ 40 ]
      ↑                 ↓
    FRONT              REAR
```

Instead of wasting unused spaces at the beginning of an array, a circular queue reuses them.

The circular movement is handled using:

```cpp
index = (index + 1) % size;
```

---

## ⏱️ Complexity

| Operation | Array Queue | Circular Queue | Linked List Queue |
|---|---:|---:|---:|
| Enqueue | O(1)* | O(1) | O(1) |
| Dequeue | O(1)* | O(1) | O(1) |
| Front | O(1) | O(1) | O(1) |
| Rear | O(1) | O(1) | O(1) |
| Search | O(n) | O(n) | O(n) |
| Display | O(n) | O(n) | O(n) |

\*Assuming the implementation maintains appropriate front/rear indices.

---

## 📂 Folder Structure

```text
Queue/
│
├── array/
│   └── queue.cpp
│
├── circular_queue/
│   └── circular_queue.cpp
│
├── linked_list/
│   └── queue.cpp
│
├── applications/
│   └── queue_applications.cpp
│
└── README.md
```

The exact structure may change as more implementations are added.

---

## 🚀 Progress

- [x] Queue basics
- [x] Enqueue
- [x] Dequeue
- [x] Front
- [x] Rear
- [x] Queue using Array
- [x] Circular Queue
- [ ] Queue using Linked List
- [ ] Deque
- [ ] Priority Queue
- [ ] BFS using Queue
- [ ] Queue-based Problem Solving

---

## 🛠️ Language

**C++**

All implementations are written from scratch for learning and practice.

---

## 🔗 Relationship with Other Data Structures

Queues are fundamental to several important algorithms:

```text
Queue
  ↓
FIFO
  ↓
BFS
  ↓
Trees
  ↓
Graphs
  ↓
Shortest Path Algorithms
  ↓
Scheduling
```

A strong understanding of queues is especially useful when implementing **Breadth First Search (BFS)** for trees and graphs.

---

## 🎯 Goal

Build a strong understanding of queues by implementing their operations from scratch, understanding FIFO behavior, and applying queues to algorithms such as **BFS and scheduling**.
