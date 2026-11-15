
#include <iostream>
#include <algorithm>
using namespace std;

struct Tnode {
    Tnode* lchild;
    int data;
    Tnode* rchild;
    int height;
};

Tnode* create_tn(int key) {
    Tnode* q = new Tnode;

    q->lchild = nullptr;
    q->data = key;
    q->rchild = nullptr;
    q->height = 0;

    return q;
}

int height(Tnode* root) {
    if (root == nullptr) {
        return -1;
    }

    return root->height;
}

int balance_factor(Tnode* root) {
    int BF;

    if (root == nullptr) {
        return 0;
    }

    return BF = height(root->lchild) - height(root->rchild);
}

// LL case: right rotation
Tnode* LL_rotation(Tnode* root) {
    Tnode* p = root->lchild;
    Tnode* temp = p->rchild;

    p->rchild = root;
    root->lchild = temp;

    root->height = 1 + max(height(root->lchild),
                           height(root->rchild));

    p->height = 1 + max(height(p->lchild),
                        height(p->rchild));

    return p;
}

// RR case: left rotation
Tnode* RR_rotation(Tnode* root) {
    Tnode* p = root->rchild;
    Tnode* temp = p->lchild;

    p->lchild = root;
    root->rchild = temp;

    root->height = 1 + max(height(root->lchild),
                           height(root->rchild));

    p->height = 1 + max(height(p->lchild),
                        height(p->rchild));

    return p;
}

// LR case: left rotation, then right rotation
Tnode* LR_rotation(Tnode* root) {
    root->lchild = RR_rotation(root->lchild);
    return LL_rotation(root);
}

// RL case: right rotation, then left rotation
Tnode* RL_rotation(Tnode* root) {
    root->rchild = LL_rotation(root->rchild);
    return RR_rotation(root);
}

// AVL insertion
Tnode* insert(Tnode* root, int key) {

    // 1. Normal BST insertion
    if (root == nullptr) {
        return create_tn(key);
    }

    if (key < root->data) {
        root->lchild = insert(root->lchild, key);
    }
    else if (key > root->data) {
        root->rchild = insert(root->rchild, key);
    }
    else {
        return root;  // Ignore duplicate keys
    }

    // 2. Update height
    root->height = 1 + max(height(root->lchild),
                           height(root->rchild));

    // 3. Calculate balance factor
    int BF = balance_factor(root);

    // 4. Identify imbalance and rotate

    // LL case
    if (BF > 1 && key < root->lchild->data) {
        return LL_rotation(root);
    }

    // RR case
    if (BF < -1 && key > root->rchild->data) {
        return RR_rotation(root);
    }

    // LR case
    if (BF > 1 && key > root->lchild->data) {
        return LR_rotation(root);
    }

    // RL case
    if (BF < -1 && key < root->rchild->data) {
        return RL_rotation(root);
    }

    return root;
}

// Inorder traversal
void inorder(Tnode* root) {
    if (root == nullptr) {
        return;
    }

    inorder(root->lchild);
    cout << root->data << " ";
    inorder(root->rchild);
}

// Display tree sideways
void display(Tnode* root, int space = 0) {
    if (root == nullptr) {
        return;
    }

    space += 5;

    display(root->rchild, space);

    cout << endl;
    for (int i = 5; i < space; i++) {
        cout << " ";
    }
    cout << root->data << "(" << root->height << ")";

    display(root->lchild, space);
}

int main() {
    Tnode* root = nullptr;
    int n, key;

    cout << "Enter number of keys: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter key: ";
        cin >> key;
        root = insert(root, key);
    }

    cout << "\nInorder traversal: ";
    inorder(root);

    cout << "\n\nTree structure (key and height):\n";
    display(root);

    cout << "\n\nRoot: " << root->data << endl;

    return 0;
}
