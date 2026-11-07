#include<iostream>
using namespace std;
struct Queue{
    int size;
    int front;
    int rear;
    int* arr;
};

Queue create(){
    Queue qe;
    cout<<"enter the size of the queue: ";
    cin>>qe.size;

    qe.front = 0;
    qe.rear = 0;

    qe.arr = new int[qe.size];
    return qe;
}
void enqueue(Queue &qe, int key){
    if((qe.rear + 1) % qe.size == qe.front){
        cout << "Queue is full";
        return;
    }

    qe.rear = (qe.rear + 1) % qe.size;
    qe.arr[qe.rear] = key;
}
void dequeue(Queue &qe){

    if(qe.rear == qe.front){
        cout<<"Queue is empty";
        return;
    }
    qe.front = (qe.front + 1)%qe.size;
}
void Display(Queue qe){
    if(qe.front == qe.rear){
        cout << "Queue is empty";
        return;
    }

    int i = (qe.front + 1) % qe.size;

    while(true){
        cout << qe.arr[i] << " ";

        if(i == qe.rear)
            break;

        i = (i + 1) % qe.size;
    }
}

int main(){
Queue qe = create();
enqueue(qe,12);
enqueue(qe,23);
enqueue(qe,34);
enqueue(qe,45);
enqueue(qe,56);
enqueue(qe,67);
dequeue(qe);
dequeue(qe);
dequeue(qe);
enqueue(qe,78);
dequeue(qe);
enqueue(qe,89);
cout<<endl;
Display(qe);
return 0;
}