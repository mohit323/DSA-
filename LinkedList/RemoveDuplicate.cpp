#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node* create(){
    node* q = new node;
    q->next = nullptr;
    return q;
}
node* create_list(int arr[],int n){
    node* head = create();
    head->data = arr[0];
    node* last = head;
    for(int i = 1; i<n; i++){
        last->next = create();
        last = last->next;
        last->data = arr[i];
    }
    return head;
}
void Display(node* p){
    while(p != nullptr){
        cout<<p->data<<" ";
        p= p->next;
    }
}
int max(node* p){
    int max = p->data;
    while(p != nullptr){
        if(max<p->data){
            max = p->data;
        }
        p= p->next;
    }
    return max;
}
node* remove_duplicate(node* head){
    if(head == nullptr)
        return head;

    node* tail = head;
    node* p = head->next;

    while(p != nullptr){

        if(tail->data == p->data){
            tail->next = p->next;
            delete p;
            p = tail->next;
        }
        else{
            tail = p;
            p = p->next;
        }

    }

    return head;
}
int main(){
int n;
cout<<"enter the no of nodes: ";
cin>>n;
int* arr = new int[n];
for(int i = 0 ;i<n;i++){
    cout<<"enter the "<<i+1<<" element: ";
    cin>>arr[i];
}
node* head = create_list(arr , n);
Display(head);
cout<<endl;
head = remove_duplicate(head);
cout<<endl;
Display(head);
return 0;
}