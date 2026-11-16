#include <iostream>
using namespace std;

struct Tnode {
    Tnode* lchild;
    int data;
    Tnode* rchild;
    int height;
};

int height(Tnode* p) {
    return p ? p->height : -1;
}

int balance_factor(Tnode* p) {
    if (!p)
        return 0;

    return height(p->lchild) - height(p->rchild);
}

Tnode* create_tn(int key) {
    Tnode* p = new Tnode;
    p->lchild = nullptr;
    p->data = key;
    p->rchild = nullptr;
    p->height = 0;
    return p;
}

// Right rotation
Tnode* LL_rotate(Tnode* p) {
    Tnode* pl = p->lchild;
    Tnode* plr = pl->rchild;

    pl->rchild = p;
    p->lchild = plr;

    p->height = max(height(p->lchild),
                    height(p->rchild)) + 1;

    pl->height = max(height(pl->lchild),
                     height(pl->rchild)) + 1;

    return pl;
}

// Left rotation
Tnode* RR_rotate(Tnode* p) {
    Tnode* pr = p->rchild;
    Tnode* prl = pr->lchild;

    pr->lchild = p;
    p->rchild = prl;

    p->height = max(height(p->lchild),
                    height(p->rchild)) + 1;

    pr->height = max(height(pr->lchild),
                     height(pr->rchild)) + 1;

    return pr;
}

// Find the smallest node in a subtree
Tnode* inorder_successor(Tnode* p) {
    while (p && p->lchild)
        p = p->lchild;

    return p;
}

// AVL deletion
Tnode* delete_node(Tnode* p, int key) {
    if (!p)
        return nullptr;

    // Ordinary BST deletion
    if (key < p->data) {
        p->lchild = delete_node(p->lchild, key);
    }
    else if (key > p->data) {
        p->rchild = delete_node(p->rchild, key);
    }
    else {
        // Case 1: No child or only right child
        if (!p->lchild) {
            Tnode* temp = p->rchild;
            delete p;
            return temp;
        }

        // Case 2: Only left child
        if (!p->rchild) {
            Tnode* temp = p->lchild;
            delete p;
            return temp;
        }

        // Case 3: Two children
        Tnode* temp = inorder_successor(p->rchild);
        p->data = temp->data;
        p->rchild = delete_node(p->rchild, temp->data);
    }

    // Update height
    p->height = max(height(p->lchild),
                    height(p->rchild)) + 1;

    int bf = balance_factor(p);

    // LL case
    if (bf > 1 && balance_factor(p->lchild) >= 0)
        return LL_rotate(p);

    // LR case
    if (bf > 1 && balance_factor(p->lchild) < 0) {
        p->lchild = RR_rotate(p->lchild);
        return LL_rotate(p);
    }

    // RR case
    if (bf < -1 && balance_factor(p->rchild) <= 0)
        return RR_rotate(p);

    // RL case
    if (bf < -1 && balance_factor(p->rchild) > 0) {
        p->rchild = LL_rotate(p->rchild);
        return RR_rotate(p);
    }

    return p;
}

void inorder(Tnode* p) {
    if (!p)
        return;

    inorder(p->lchild);
    cout << p->data << " ";
    inorder(p->rchild);
}

int main() {
    Tnode* root = nullptr;

    // Build a tree using your AVL insertion function.
    // Example: root = insert(root, key);

    root = delete_node(root, 30);

    inorder(root);
    cout << '\n';

    return 0;
}