# Vector

A **Vector** is a dynamic array data structure that stores elements in **contiguous memory** and automatically manages its capacity as elements are added or removed.

This implementation is written in **C++** from scratch to understand how vectors work internally.

---

## 📌 What is a Vector?

A vector maintains two important properties:

- **Size** → Number of elements currently stored.
- **Capacity** → Total amount of memory allocated.

For example:

```text
Size = 5
Capacity = 8

[10][20][30][40][50][ ][ ][ ]
 ↑                   ↑
elements             available space
