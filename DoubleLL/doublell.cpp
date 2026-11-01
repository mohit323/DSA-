#include<iostream>
using namespace std;
struct node{
    node* prev;
    int data;
    node* next;
};
node* create(){
    node* q = new node;
    q->next = nullptr;
    q->prev = nullptr;

    return q;
}
node* create_list(int arr[] , int n){
    node* head = create();
    head->data = arr[0];

    node* last = head;

    for(int i = 1; i<n ; i++){
        last->next = create();
        last->next->prev = last;
        
        last = last->next;
        last->data = arr[i];
    }
    return head;
}
void Display(node* head){
    node* p = head;

    while( p != nullptr){
        cout<<p->data<<" ";
        p = p->next;
    }
}
node* insert(node* head, int index){
    node* q = create();
    cout<<"enter the value you want to insert: ";
    cin>>q->data;

    int count = 0;
    
    node* p = head;
    while( p != nullptr){
        count++;

        if(count == index){
            p = p->next;
            p->prev->next = q;
            q->prev = p->prev;

            q->next = p;
            p->prev = q;

            return head;
        }
        p = p->next;
    }
}
node* remove(node* head, int index){
    node* p = head;
    node* del = nullptr;
    int count = 0;
    while( p != nullptr ){
        count++;

        if(count == index){
            del = p;
            p = p->next;
            del->prev->next = p;
            p->prev = del->prev;

            delete del;
            return head;
        }
        p = p->next;
    }
}
int main(){
int n;
cout<<"enter the no of nodes: ";
cin>>n;

int arr[n];
for(int i = 0 ; i<n ; i++){
    cout<<"enter the "<<i+1<<" node data: ";
    cin>>arr[i];
}
node* head = create_list(arr,n);
Display(head);
cout<<endl;
head = insert(head , 2);
Display(head);
cout<<endl;
head = remove(head,2);
Display(head);
return 0;
}
