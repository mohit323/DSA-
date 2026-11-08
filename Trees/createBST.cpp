#include<iostream>
using namespace std;
struct Tnode{
    Tnode* lchild;
    int data;
    Tnode* rchild;
};
Tnode* create_tn(){
    Tnode* q = new Tnode;
    q->lchild = nullptr;
    q->rchild = nullptr;

    return q;
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
Tnode* create_BST(int arr[], int n){

    Tnode* root = nullptr;

    for(int i = 0; i < n; i++){
        root = insert(root, arr[i]);
    }

    return root;
}
void inorder(Tnode* root){

    Tnode* p = root;

    if(p){
        
        inorder(p->lchild);
        cout << p->data << " ";
        inorder(p->rchild);

    }
}
int main(){
int n;
cout<<"enter the no of nodes: ";
cin>>n;
int* arr = new int[n];
for(int i = 0 ; i<n ; i++){
    cout<<"enter the "<<i+1<<" value: ";
    cin>>arr[i];
}
Tnode* BST = create_BST(arr,n);

cout<<endl;
inorder(BST);
return 0;
}