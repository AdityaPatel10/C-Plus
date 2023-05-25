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
        cout<<"Complex Number= ";
        cout<<real<<" + i"<<img;
    }
    friend abc complex(abc, abc);
};
abc complex(abc x, abc y){
    abc t;
    t.real= x.real+y.real;
    t.img= x.img+y.img;
    return t;
}
int main(){
    abc o1, o2, o3;
    o1.get();
    o2.get();
    o3= complex(o1, o2);
    o3.show();
}