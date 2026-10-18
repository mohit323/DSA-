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
node* concat_list(node* head, node* head1) {
    if (head == nullptr)
        return head1;

    node* p = head;

    while (p->next != nullptr) {
        p = p->next;
    }

    p->next = head1;

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
node* head1 = create_list(arr , n);
cout<<endl;
head = concat_list(head,head1);
Display(head);

return 0;
}