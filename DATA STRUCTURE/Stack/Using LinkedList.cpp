#include<iostream>
using namespace std;
struct Stack{
    int data;
    struct Stack *next;
};
struct Stack *top=0;
int push(int X){
    struct Stack *NewNode;
    NewNode= (struct Stack*)malloc(sizeof(struct Stack));
    NewNode->data=X;
    NewNode->next=top;
    top=NewNode;
    cout<<NewNode->data<<" pushed into the stack."<<endl;
}
int pop(){
    struct Stack *temp;
    if(top==0){
        cout<<"UnderFlow.."<<endl;
    }
    else{
        temp=top;
        top=top->next;
        free(temp);
    }
}
void Display(){
    struct Stack *temp;
    temp=top;
    cout<<"Elements of the stack= ";
    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    push(0);
    push(19);
    pop();
    push(12);
    push(5);
    Display();
}