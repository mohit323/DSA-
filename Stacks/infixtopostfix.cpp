#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    char* arr;
};

stack create(){
    stack st;

    cout << "enter the size of the stack: ";
    cin >> st.size;

    st.top = -1;
    st.arr = new char[st.size];

    return st;
}

void push(stack &st, char key){
    if(st.top == st.size - 1){
        cout << "Stack overflow";
        return;
    }

    st.top++;
    st.arr[st.top] = key;
}

char pop(stack &st){
    if(st.top == -1){
        cout << "Stack underflow";
        return '\0';
    }

    char x = st.arr[st.top];
    st.top--;

    return x;
}

void Display(stack st){
    for(int i = 0; i <= st.top; i++){
        cout << st.arr[i];
    }
}

int precedence(char op){
    if(op == '^')
        return 4;

    if(('a' <= op && op <= 'z') ||
       ('A' <= op && op <= 'Z'))
        return 3;

    if(op == '*' || op == '/')
        return 2;

    if(op == '+' || op == '-')
        return 1;

    return 0;
}

stack infix_to_postfix(stack st){

    stack postfix;
    postfix.size = st.size;
    postfix.top = -1;
    postfix.arr = new char[postfix.size];

    stack st1;
    st1.size = st.size;
    st1.top = -1;
    st1.arr = new char[st1.size];

    for(int i = 0; i <= st.top; i++){

        if(st1.top == -1 ||
           precedence(st.arr[i]) > precedence(st1.arr[st1.top]))
        {
            push(st1, st.arr[i]);
        }

        else
        {
            while(st1.top != -1 &&
                  precedence(st.arr[i]) <=
                  precedence(st1.arr[st1.top]))
            {
                char x = pop(st1);
                push(postfix, x);
            }

            push(st1, st.arr[i]);
        }
    }

    while(st1.top != -1){
        char x = pop(st1);
        push(postfix, x);
    }

    return postfix;
}

int main(){

    stack st = create();

    push(st,'a');
    push(st,'+');
    push(st,'b');
    push(st,'*');
    push(st,'c');
    push(st,'-');
    push(st,'d');
    push(st,'/');
    push(st,'e');

    Display(st);

    stack postfix = infix_to_postfix(st);

    cout << endl;

    Display(postfix);
}