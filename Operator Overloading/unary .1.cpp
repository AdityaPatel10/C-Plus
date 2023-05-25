#include<iostream>
using namespace std;
class abc{
    public:
    int a, b;
    abc(){
        a=9;
        b=90;
    }
    void operator -(){
        a = -a;
        b = -b;
    }
    void show(){
        cout<<"A= "<<a<<endl;
        cout<<"B= "<<b<<endl;
    }
};
int main(){
    abc o1;
    -o1;
    o1.show();
}