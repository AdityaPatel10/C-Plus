#include<iostream>
using namespace std;
#define MAX 10
class Stack{
    int top=-1;
    public:
    int stack[MAX];
    int push(int X);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
    void Display();
};
int Stack::push(int X){
    if(top == MAX-1){
        cout<<"Stack Overflow.."<<endl;
    }
    else{
        top++;
        stack[top]=X;
        cout<<X<<" pushed into the stack."<<endl;
    }
}
int Stack::pop(){
    if(top==-1){
        cout<<"Stack Underflow.."<<endl;
    }
    else{
        int temp=stack[top];
        top--;
        cout<<temp<<" poped out from the stack."<<endl;
    }
}
int Stack::peek(){
    if(top==-1){
        cout<<"Stack Underflow.."<<endl;
    }
    else{
        cout<<"Top element is= "<<stack[top]<<endl;
    }
}
bool Stack::isEmpty(){
    if(top<=0){
        return 1;
    }
    else{
        return 0;
    }
}
bool Stack::isFull(){
    if(top==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}
void Stack::Display(){
    cout<<"Elements present in stack is= ";
    for(int i=top; i>=0; i--){
        cout<<stack[i]<<" ";
    }
}
int main(){
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(10);
    s1.pop();
    s1.peek();
    s1.isEmpty();
    s1.Display();
}