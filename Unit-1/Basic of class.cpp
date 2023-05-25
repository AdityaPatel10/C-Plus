#include<iostream>
using namespace std;
class student{
    string name;
    int id;
    public:
    void get(){
        cin>>name;
        cin>>id;
    }
    void show(){
        cout<<"Student name is: "<<name<<endl;
        cout<<"Student id is: "<<id<<endl;
    }
};
int main(){
    student s1;
    s1.get();
    s1.show();
    return 0;
}