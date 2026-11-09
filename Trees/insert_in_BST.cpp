#include<iostream>
using namespace std;

struct Tnode{
    Tnode* lchild;
    int data;
    Tnode* rchild;
};

struct Qnode{
    Tnode* data;
    Qnode* next;
};

struct Queue{
    Qnode* front;
    Qnode* rear;
};

Qnode* create_qnd(){
    Qnode* q = new Qnode;
    q->data = nullptr;
    q->next = nullptr;

    return q;
}

Queue create_qe(){
    Queue q;

    q.front = nullptr;
    q.rear = nullptr;

    return q;
}

Tnode* create_tn(){
    Tnode* q = new Tnode;

    q->lchild = nullptr;
    q->rchild = nullptr;

    return q;
}

void Enqueue(Queue &qe, Tnode* key){

    Qnode* temp = create_qnd();
    temp->data = key;

    if(qe.front == nullptr){
        qe.front = temp;
        qe.rear = temp;
    }
    else{
        qe.rear->next = temp;
        qe.rear = temp;
    }
}

Tnode* Dequeue(Queue &qe){

    if(qe.front == nullptr){
        cout << "Queue is empty\n";
        return nullptr;
    }

    Qnode* del = qe.front;

    Tnode* x = del->data;

    qe.front = qe.front->next;

    if(qe.front == nullptr){
        qe.rear = nullptr;
    }

    delete del;

    return x;
}

Tnode* create_tree(Queue &qe){

    Tnode* root = create_tn();

    cout << "Enter the root data of the tree: ";
    cin >> root->data;

    Enqueue(qe, root);

    while(qe.front != nullptr){

        Tnode* p = Dequeue(qe);

        int lchild_data;
        int rchild_data;

        cout << "Enter the left child data of "
             << p->data << ": ";

        cin >> lchild_data;

        if(lchild_data != -1){

            Tnode* temp = create_tn();

            temp->data = lchild_data;

            p->lchild = temp;

            Enqueue(qe, temp);
        }

        cout << "Enter the right child data of "
             << p->data << ": ";

        cin >> rchild_data;

        if(rchild_data != -1){

            Tnode* temp = create_tn();

            temp->data = rchild_data;

            p->rchild = temp;

            Enqueue(qe, temp);
        }
    }

    return root;
}
int no_of_nodes(Tnode* root){
    Tnode* p = root;

    if(p){
        int x = no_of_nodes(p->lchild);
        int y = no_of_nodes(p->rchild);

        return x+y+1;
    }
}
Tnode* binary_search(Tnode* root, int key){

    if(root == nullptr){
        return nullptr;
    }
    if(root->data == key){
        return root;
    }
    if(root->data > key){
        return binary_search(root->lchild, key);
    }
    else{
        return binary_search(root->rchild, key);
    }
}
Tnode* insert(Tnode* root, int key){

    Tnode* p = root;
    Tnode* temp = nullptr;

    Tnode* q = create_tn();
    q->data = key;

    while(p != nullptr){
        temp = p;
        if(key < p->data){
            p = p->lchild;
        }
        else if(key > p->data){
            p = p->rchild;
        }
        else{
            delete q;
            return root;
        }
    }
    if(temp == nullptr){
        return q;
    }
    if(key < temp->data){
        temp->lchild = q;
    }
    else{
        temp->rchild = q;
    }
    return root;
}
int main(){

    Queue qe = create_qe();

    Tnode* root = create_tree(qe);

    cout<<"the total no of nodes in the tree is : "<<no_of_nodes(root);
    cout<<endl;
    cout<<binary_search(root,69);
    return 0;
}