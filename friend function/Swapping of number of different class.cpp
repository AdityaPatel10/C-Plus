#include<iostream>
using namespace std;
class c2;
class c1 {
    int a;
    public:
    friend void swap(c1, c2);
    void get() {
        cout<<"Enter the value of A: ";
        cin>>a;
    }
};
class c2{
    int b;
    public:
    friend void swap(c1, c2);
    void get() {
        cout<<"Enter the value of B: ";
        cin>>b;
    }
};
void swap(c1 t1, c2 t2) {
    int t;
    t=t1.a;
    t1.a=t2.b;
    t2.b=t;
    cout<<"After swapping:-"<<endl;
    cout<<"A= "<<t1.a<<endl;
    cout<<"B= "<<t2.b<<endl;
}
int main(){
    c1 o1;
    o1.get();
    c2 o2;
    o2.get();
    swap(o1, o2);
    return 0;
}