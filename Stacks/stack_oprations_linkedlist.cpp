#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* create(){
    node* q = new node;
    q->next = nullptr;
    return q;
}
node* create_list(int arr[], int n){
    node* head = create();
    head->data = arr[0];
    node* last = head;

    for(int i = 1; i<n ; i++){
        last->next = create();
        last = last->next;
        last->data = arr[i];
    }
    return head;
}
node* link_push(node* head){
    node* temp = create();
    cout<<"enter the no you want to insert: ";
    cin>>temp->data;
    temp->next = head;
    head = temp;
    return head;
}
node* link_pop(node* head){
if(head == nullptr){
    cout<<"Stack Underflow";
    return head;
}

node* p = head;
head = head->next;
delete p;
return head;
}
int link_peek(node* head, int index){

    node* p = head;

    for(int i = 1; i<index && p!=nullptr; i++){
        p = p->next;
    }

    if(p!=nullptr)
        return p->data;

    return -1;
}
void Display(node* head){
    node* p = head;

    while(p != nullptr){
        cout<<p->data<<" ";
        p = p->next;
    }
}

int main(){
int n;
cout<<"enter the no of nodes: ";
cin>>n;

int* arr = new int[n];

for(int i = 0; i<n ; i++){
    cout<<"enter the "<<i+1<<" element of the list: ";
    cin>>arr[i];
}
node* head = create_list(arr,n);
head = link_pop(head);
cout<<endl;
int peek_result = link_peek(head, 3);
cout<<peek_result;
cout<<endl;
Display(head);
return 0;
}