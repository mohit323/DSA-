# AVL Tree

An **AVL Tree (Adelson-Velsky and Landis Tree)** is a self-balancing Binary Search Tree (BST) where the height difference between the left and right subtrees of every node is at most **1**.

## 📌 Features

- Binary Search Tree based structure
- Automatically maintains balance after insertion
- Uses rotations to fix imbalance
- Maintains `O(log n)` height
- Faster searching compared to an unbalanced BST in the worst case

## ⚖️ Balance Factor

For every node:

```text
Balance Factor = Height(Left Subtree) - Height(Right Subtree)
```

A node is balanced when:

```text
-1 ≤ Balance Factor ≤ 1
```

If the balance factor becomes `+2` or `-2`, a rotation is required.

## 🔄 AVL Rotations

There are four imbalance cases:

### 1. LL Rotation

Occurs when a node becomes unbalanced because of insertion into the **left subtree of its left child**.

```text
      30
     /
   20
   /
 10
```

Apply a **Right Rotation**.

```text
     20
    /  \
  10    30
```

### 2. RR Rotation

Occurs when a node becomes unbalanced because of insertion into the **right subtree of its right child**.

```text
  10
    \
    20
      \
      30
```

Apply a **Left Rotation**.

```text
     20
    /  \
  10    30
```

### 3. LR Rotation

Occurs when insertion happens in the **right subtree of the left child**.

```text
      30
     /
   10
     \
     20
```

Apply:

1. Left Rotation on `10`
2. Right Rotation on `30`

Result
