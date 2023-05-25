#include<iostream>
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"Base class."<<endl;
    }
    void show(){
        cout<<"Base 2."<<endl;
    }
};
class derived : public base{
    public:
    void print(){
        cout<<"Derived Class."<<endl;
    }
    void show(){
        cout<<"Derived 2."<<endl;
    }
};
int main(){
    base *ptr;
    derived d;
    ptr = &d;
    ptr->print();
    ptr->show();
}