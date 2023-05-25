#include<iostream>
using namespace std;
class abc{
    public:
    int real, img;
    void get(){
        cout<<"Enter values: ";
        cin>>real>>img;
    }
    void show(){
        cout<<"Complex Number is= "<<real<<" + i"<<img<<endl;
    }
    void sum(abc &x){
        real=x.real+real;
        img=x.img+img;
    }
};
int main(){
    abc o1, o2;
    o1.get();
    o2.get();
    o2.sum(o1);
    o2.show();
    return 0;
}