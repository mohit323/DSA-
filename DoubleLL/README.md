# Doubly Linked List

## Overview
A **Doubly Linked List** is a linear data structure in which each node contains three components:
- `data` – Stores the value.
- `prev` – Pointer to the previous node.
- `next` – Pointer to the next node.

Unlike a singly linked list, a doubly linked list allows traversal in both forward and backward directions.

## Node Structure

```cpp
struct Node {
    int data;
    Node* prev;
    Node* next;
};
```

## Structure Visualization

```text
NULL <- [10] <-> [20] <-> [30] -> NULL
```

Each node maintains pointers to both its previous and next nodes.

## Operations

The following operations are implemented or will be covered:

- [ ] Creation of a doubly linked list
- [ ] Display (Forward Traversal)
- [ ] Display (Backward Traversal)
- [ ] Insertion at the beginning
- [ ] Insertion at the end
- [ ] Insertion at a given position
- [ ] Deletion from the beginning
- [ ] Deletion from the end
- [ ] Deletion from a given position
- [ ] Searching for an element
- [ ] Counting the number of nodes
- [ ] Reversing a doubly linked list

## Time Complexity

| Operation | Time Complexity |
|---|---|
| Traversal | O(n) |
| Search | O(n) |
| Insertion at beginning | O(1) |
| Insertion at end | O(n)* |
| Deletion at beginning | O(1) |
| Deletion at end | O(n)* |

*Assuming only a head pointer is maintained. With a tail pointer, end insertion and deletion can be O(1).

## Advantages
- Supports traversal in both directions.
- Easier deletion of a node when its pointer is available.
- Efficient insertion and deletion at both ends when head and tail pointers are maintained.

## Disadvantages
- Requires extra memory for the `prev` pointer.
- More pointer manipulations compared to a singly linked list.
- Implementation is comparatively more complex.

## Language
- C++

## Learning Objective
Understanding pointer manipulation, bidirectional traversal, dynamic memory allocation, and insertion/deletion operations in linked data structures.

---

**Part of my DSA journey:** Implementing fundamental data structures from scratch to strengthen problem-solving and programming fundamentals.
