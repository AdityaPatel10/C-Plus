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
    abc sum(abc x, abc y){
        real=x.real+y.real;
        img=x.img+y.img;
    }
};
int main(){
    abc o1, o2, o3;
    o1.get();
    o2.get();
    o3.sum(o1, o2);
    o3.show();
    return 0;
}