#include<iostream>
using namespace std;
class A{
    public:
    int a;
    class B;
    A(){
        a=20;
    }
    void show(){
        cout<<"A="<<a<<endl;
    }
};
class A::B{
        public:
        int b;
        B(){
            A o1;
            o1.a =10;
            o1.show();
        }
    };
int main(){
    A::B o1;
}