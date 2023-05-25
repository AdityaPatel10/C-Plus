#include<iostream>
using namespace std;
class abc{
    int a, b;
    public:
    void get(){
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;
    }
    void show(){
        cout<<"Value of a is= "<<a<<endl;
        cout<<"Value of b is= "<<b<<endl;
    }
    void sum(){
        cout<<"Sum of "<<a<<" & "<<b<<" is= "<<a+b<<endl;
    }
    void largest(){
        if(a>b){
            cout<<""<<a<<" is greater than "<<b<<""<<endl;
        }
        else{
            cout<<""<<b<<" is greater than "<<a<<""<<endl;
        }
    }
};
int main(){
    abc o1;
    abc *ptr= &o1;
    ptr->get();
    ptr->show();
    ptr->sum();
    ptr->largest();
}