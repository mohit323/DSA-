#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

struct Queue{
    node* front;
    node* rear;
};

node* create(){
    node* q = new node;
    q->next = nullptr;
    return q;
}

Queue create_list(int arr[], int n){
    Queue q;

    q.front = create();
    q.front->data = arr[0];

    q.rear = q.front;

    for(int i = 1; i < n; i++){
        q.rear->next = create();
        q.rear = q.rear->next;
        q.rear->data = arr[i];
    }

    return q;
}

void Display(Queue q){
    node* p = q.front;

    while(p != nullptr){
        cout << p->data << " ";
        p = p->next;
    }

    cout << endl;
}

void enqueue(Queue &q){
    node* p = create();

    cout << "enter the data you want to insert in the queue: ";
    cin >> p->data;

    q.rear->next = p;
    q.rear = p;
}

void dequeue(Queue &q){
    node* del = q.front;

    q.front = q.front->next;

    delete del;
}

int main(){

    int n;

    cout << "enter the no of nodes in the list: ";
    cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; i++){
        cout << "enter the value of the " << i+1 << " node: ";
        cin >> arr[i];
    }

    Queue q = create_list(arr, n);

    cout << "\nQueue: ";
    Display(q);

    enqueue(q);

    cout << "After enqueue: ";
    Display(q);

    dequeue(q);

    cout << "After dequeue: ";
    Display(q);

    delete[] arr;

    return 0;
}