#include<iostream>
using namespace std;
#define MAX 4
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
    if(rear==MAX-1&&front==0 || ((rear+1)%MAX)==front){
        cout<<"OverFlow.."<<endl;
    }
    else if(front==-1 && rear==-1 ){
        front=0;
        rear=0;
        queue[rear]= X;
        cout<<queue[rear]<<" inserted into the queue"<<endl;
    }
    else if(front != 0 && rear==MAX-1){
        rear=0;
        queue[rear]=X;
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
        cout<<queue[front]<<" is dequeued"<<endl;
        front=rear=-1;
    }
    else{
        cout<<queue[front]<<" is dequeued"<<endl;
        front=(front+1)%MAX;
    }
}
int Queue::peek(){
    if(front==-1 && rear ==-1){
        cout<<"UnderFlow.."<<endl;
    }
    else{
        cout<<"Top Element is= "<<queue[front]<<endl;
    }
}
void Queue::Display(){
    if(front==-1 && rear==-1){
        cout<<"UnderFlow.."<<endl;
    }
    else if(front<=rear){
        cout<<"Elements Present in Queue is: ";
        for(int i=front; i<=rear; i++){
            cout<<queue[i]<<"  ";
        }
    }
    else{
        for(int i=front; i<MAX; i++){
            cout<<queue[i]<<"  ";
        }
        for(int i=0; i<=rear; i++){
            cout<<queue[i]<<"  ";
        }
    }
}
int main(){
    Queue q;
    q.enQueue(9);
    q.enQueue(23);
    q.enQueue(2);
    q.enQueue(4);
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.enQueue(7);
    q.enQueue(10);
    q.enQueue(8);
    q.peek();
    q.Display();
    return 0;
}