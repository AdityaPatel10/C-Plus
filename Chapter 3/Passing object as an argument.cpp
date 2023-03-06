#include<iostream>
using namespace std;
class abc{
    int a, b;
    public:
    void get(){
        cout<<"Enter the value of A: ";
        cin>>a;
        cout<<"Enter the value of B: ";
        cin>>b;
    }
    void sum(abc o1, abc o2){
        cout<<"Sum of "<<o1.a<<" & "<<o2.a<<"= "<<o1.a+o2.a<<endl;
        cout<<"Sum of "<<o1.b<<" & "<<o2.b<<"= "<<o1.b+o2.b<<endl;
    }
};
int main(){
    abc t1,t2,add;
    t1.get();
    t2.get();
    add.sum(t1, t2);
    return 0;
}