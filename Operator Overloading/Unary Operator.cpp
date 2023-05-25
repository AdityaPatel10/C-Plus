#include<iostream>
using namespace std;
class abc{
    int a, b;
    public:
    void get(){
        cout<<"Enter the value of a & b: ";
        cin>>a>>b;
    }
    friend void operator -(abc &);
    void show(){
        cout<<"A= "<<a<<endl<<"B= "<<b<<endl;
    }
};
void operator -(abc &s){
    s.a= -s.a;
    s.b= -s.b;
}
int main(){
    abc obj;
    cout<<"Enter the value for Object 1:-"<<endl;
    obj.get();
    obj.show();
    abc obj1;
    cout<<"Enter the value for Object 2:-"<<endl;
    obj1.get();
    -obj1;
    obj1.show();
}