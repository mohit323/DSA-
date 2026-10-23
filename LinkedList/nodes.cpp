#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
int main(){
node *p = new node;
p->data = 10;
p->next = 0;


node *q;
q = p;
q = p->next;
p = p->next;

return 0;
}

