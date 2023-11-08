#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int main(){
    Node *head, *NewNode,  *temp;
    head=0;
    int choice=1;
    while(choice==1){
        NewNode= (Node*)malloc(sizeof(Node));
        cout<<"Enter Data: ";
        cin>>NewNode->data;
        NewNode->next=0;
        if(head==0){
            head=NewNode;
            temp=NewNode;
        }
        else{
            temp->next=NewNode;
            temp=NewNode;
        }
        cout<<"Do you want to continue if yes press 1 if no press 0= ";
        cin>>choice;
    }
    temp=head;
    while(temp!=0){
        cout<<"Elements present in Linked List is"
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}