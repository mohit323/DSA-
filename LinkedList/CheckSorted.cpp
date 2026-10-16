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
node* create_list(int arr[],int n){
    node* head = create();
    head->data = arr[0];
    node* last = head;

    for(int i = 1; i<n ;i++){
        last->next = create();
        last = last->next;
        last->data = arr[i];
    }
    return head;
}
void Display(node* head){
    node* p = head;
    while(p != nullptr){
        cout<<p->data<<" ";
        p = p->next;
    }
}
node* merge(node* head, node* head1) {
    node* first = head;
    node* second = head1;
    node* third = nullptr;
    node* last = nullptr;

    if (first == nullptr)
        return second;
    if (second == nullptr)
        return first;

    if (first->data < second->data) {
        third = last = first;
        first = first->next;
    }
    else {
        third = last = second;
        second = second->next;
    }

    last->next = nullptr;

    while (first != nullptr && second != nullptr) {

        if (first->data < second->data) {
            last->next = first;
            last = first;
            first = first->next;
        }
        else {
            last->next = second;
            last = second;
            second = second->next;
        }

        last->next = nullptr;
    }

    if (first != nullptr)
        last->next = first;

    if (second != nullptr)
        last->next = second;

    return third;
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
cout<<endl;


return 0;
}