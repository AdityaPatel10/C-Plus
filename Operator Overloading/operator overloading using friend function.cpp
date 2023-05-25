#include<iostream>
using namespace std;
class complex{
    protected:
    int real, img;
    public:
    complex(){ }
    complex(int r, int i){
        real= r;
        img= i;
    }
    friend complex operator + (complex, complex);
    void show(){
        cout<<"Additin of two complex number is= "<<real<<" + i"<<img<<endl; 
    }
};
complex operator + (complex c1, complex c2){
    complex t;
    t.real = c1.real+ c2.real;
    t.img = c1.img +c2.img;
    return t;
    }
int main(){
    complex o1(1, 2), o2(3, 6), o3;
    o3= o1+o2;
    o3.show();
    return 0;
}