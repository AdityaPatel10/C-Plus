#include<iostream>
using namespace std;
class  abc{
    public:
    int a;
    void print(){
        cout<<a<<endl;
    }
};
int main(){
    abc o1, *p;
    p= &o1;
    int abc:: *ptr= &abc::a;
    p->*ptr = 10;
    p->print();
    o1.*ptr = 20;
    o1.print();
}