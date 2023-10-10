#include<iostream>
using namespace std;
#define MAX 10
class Queue{
    int front=-1, rear=-1;
    public:
    int queue[MAX];
    void enQueue(int X);
    void deQueue();
    int peek();
    void Display();
};
void Queue::enQueue(int X){
    if(rear==MAX-1){
        cout<<"OverFlow.."<<endl;
    }
    else if(front==-1 && rear==-1){
        front=0;
        rear=0;
        queue[rear]= X;
        cout<<queue[rear]<<" inserted into the queue"<<endl;
    }
    else{
        rear++;
        queue[rear]= X;
        cout<<queue[rear]<<" inserted into the queue"<<endl;
    }
}
void Queue::deQueue(){
    if(front==-1 && rear==-1){
        cout<<"UnderFlow.."<<endl;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front++;
    }
}
int Queue::peek(){
    if(front==-1 && rear ==-1){
        cout<<"UnderFlow.."<<endl;
    }
    else{
        cout<<"Top Element is= "<<queue[rear]<<endl;
    }
}
void Queue::Display(){
    if(front==-1 && rear==-1){
        cout<<"UnderFlow.."<<endl;
    }
    else{
        cout<<"Elements Present in Queue is: ";
        for(int i=front; i<=rear; i++){
            cout<<queue[i]<<"  ";
        }
    }
}
int main(){
    Queue q;
    q.enQueue(9);
    q.enQueue(23);
    q.enQueue(2);
    q.deQueue();
    q.peek();
    q.Display();
    return 0;
}