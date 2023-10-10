#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *front=0;
Node *rear=0;
void enQueue(int X){
    Node *NewNode;
    NewNode = (Node*)malloc(sizeof(Node));
    NewNode->data = X;
    NewNode->next =0;
    if(front==0 && rear==0){
        front=rear=NewNode;
    }
    else{
        rear->next=NewNode;
        rear=NewNode;
    }
    cout<<rear->data<<" is pushed into the queue"<<endl;
}
void deQueue(){
    Node *temp;
    temp=front;
    if(front==0 && rear==0){
        cout<<"Queue is empty"<<endl;
    }
    else{
        front=front->next;
        free(temp);
    }
}
void Display(){
    Node *temp;
    if(front==0 && rear==0){
        cout<<"Queue is empty"<<endl;
    }
    else{
        temp=front;
        cout<<"Element present in queue is: ";
        while(temp!=0){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}
void peek(){
    if(front==0 && rear==0){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"\nElement at the top of queue is: "<<front->data<<endl;
    }
}
int main(){
    enQueue(8);
    enQueue(10);
    enQueue(1);
    enQueue(11);
    deQueue();
    Display();
    peek();
}