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
        p=p->next;
    }
}
int sum(node* p){
    int sum = 0;
    while(p != 0){
        sum += p->data;
        p=p->next;
    }
    return sum;
}
int count_nodes(node* p){
    int count = 0;
    while (p != nullptr)
    {
        count++;
        p= p->next;
    }
    return count;
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
int min(node* p){
    int min = p->data;
    while(p != nullptr){
        if(min>p->data){
            min = p->data;
        }
        p= p->next;
    }
    return min;
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
return 0;
}