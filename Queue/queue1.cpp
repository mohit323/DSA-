#include<iostream>
using namespace std;
struct Queue{
    int size;
    int frount;
    int rear;
    int* arr;
};
Queue create(){
    Queue qe;
    cout<<"enter the size of the queue: ";
    cin>>qe.size;

    qe.frount = -1;
    qe.rear = -1;

    qe.arr = new int[qe.size];
    return qe;
}
void enqueue(Queue &qe , int key){
    if(qe.rear == qe.size -1){
        cout<<"Queue is full";
        return;
    }
    qe.rear++;
    qe.arr[qe.rear] = key;

}
int dequeue(Queue &qe){
    if(qe.frount == qe.rear){
        cout<<"Queue is empty";
        return -1;
    }
    
    qe.frount++;
    int x = qe.arr[qe.frount];
    return x;
}
void Display(Queue qe){
    for(int i = qe.frount; i<= qe.rear ; i++ ){
        cout<<qe.arr[i]<<" ";
    }
}
bool is_full(Queue qe){
    if(qe.rear == qe.size -1){
        cout<<"Queue is full";
        return true;
    }
    return false;
}
bool is_empty(Queue qe){
    if(qe.frount > qe.rear){
        cout<<"Queue is empty";
        return true;
    }
    return false;
}
int how_much_empty(Queue qe){
    int count = 0;
    for(int i = qe.rear+1; i<= qe.size -1 ; i++ ){
        count++;
    }
    return count;

}
int main(){
Queue qe = create();
enqueue(qe,12);
enqueue(qe,23);
enqueue(qe,34);
enqueue(qe,45);
dequeue(qe);
enqueue(qe,56);
enqueue(qe,67);
dequeue(qe);
cout<<endl;
Display(qe);
cout<<endl;
cout<<"the empty places left to fill in the queue is : "<<how_much_empty(qe);
return 0;
}