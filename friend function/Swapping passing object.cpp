#include<iostream>
using namespace std;
class abc{
    public:
    int a, b;
    void get(){
        cout<<"Enter values: ";
        cin>>a>>b;
    }
    void show(){
        cout<<"Before Swaping."<<endl;
        cout<<"A= "<<a<<endl<<"B= "<<b<<endl;
    }
    friend void swap(abc);
};
void swap(abc c){
    int t;
    t=c.a;
    c.a=c.b;
    c.b=t;
    cout<<"After Swaping."<<endl;
    cout<<"A= "<<c.a<<endl<<"B= "<<c.b<<endl;
}
int main(){
    abc o1, o2;
    o1.get();
    o1.show();
    swap(o1);
}