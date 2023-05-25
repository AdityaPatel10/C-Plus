#include <iostream> 
using namespace std;
class D{
    public:
    int d;
    void show(){
        cout<<"D= "<<d<<endl;
    }
};
class A :virtual public D{
    public:
    int a;
    void show(){
       // D::show();
        cout<<"A= "<<a<<endl;
    }
};
class B :virtual public D{
    public:
    int b;
    void show(){
        //D::show();
        cout<<"B= "<<b<<endl;
    }
};
class C :public A,public B{
    public:
    int c;
    C(){
        D::d=1;
        A::a=2;
        B::b=3;
        c=4;
    }
    void show(){
        //show();
        cout<<"C= "<<c<<endl;
    }
};
int main (){
    C o1;
    o1.A::show();
    o1.B::show();
    o1.show();
    o1.D::show();
}