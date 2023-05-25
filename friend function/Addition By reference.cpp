#include<iostream>
using namespace std;
class abc{
    public:
    int a, b, add;
    void get(){
        cout<<"Enter values: ";
        cin>>a>>b;
    }
    void show(){
        cout<<"Sum is= "<<add;
    }
    friend void sum(abc &);
};
void sum(abc &c){
    c.add=c.a+c.b;
}
int main(){
    abc o1;
    o1.get();
    sum(o1);
    o1.show();
}