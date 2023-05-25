#include<iostream>
using namespace std;
class complex{
    int real, img;
    public:
    complex(){ }
    complex(int r, int i){
        real= r;
        img= i;
    }
    complex operator + (complex c1){
        real += c1.real;
        img += c1.img;
        return *this;
    }
    void show(){
        cout<<"Addition of two complex number is= "<<real<<" + i"<<img<<endl; 
    }
};
int main(){
    complex o1(1, 2), o2(3, 6), o3;
    o3= o1+o2;
    o3.show();
    return 0;
}