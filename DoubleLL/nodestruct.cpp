#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
};
node* create(){
    node* q = new node;
    q->next = nullptr;
    q->prev = nullptr;

    return q;
}
node* create_list(int arr[], int n){
    node* head = create();
    head->data = arr[0];

    node* last = head;

    for(int i = 1; i<n; i++){
        last->next = create();
        last->next->prev = last;

        last = last->next;
        last->data = arr[i];
    }

    return head;
}
void Display(node* head){
    node* p = head;

    while( p != nullptr ){
        cout<<p->data<<" ";
        p = p->next;
    }
}
node* insert(node* head , int index ){
    node* q = create();
    int key;
    cout<<"enter the key you want to insert: ";
    cin>>key;
    q->data = key;

    int count = 0;
    node* p = head;
    while( p != nullptr ){
        count++;
        if(count == index){
           p = p->next;
           p->prev->next = q->prev;
           q->next = p->prev;
        }
        p = p->next;

    }
    return head;

}
int main(){
int n;
cout<<"enter the no of nodes: ";
cin>>n;

int arr[n];

for(int i = 0 ; i<n ;i++){
    cout<<"enter the "<<i+1<<" node: ";
    cin>>arr[i];
}

node* head = create_list(arr, n);

Display(head);
cout<<endl;
head = insert(head, 3);
cout<<endl;
Display (head);
return 0;
}