#include<iostream>
using namespace std;
class complex{
    public:
    int real, img;

    void get(int r, int i){
        real = r;
        img = i;
    }
    complex operator + (complex o1){
        real += o1.real;
        img += o1.img;
        return *this;
    }
    void show(){
        cout<<"Additin of complex number is= "<<real<<" + i"<<img<<endl; 
    }
};
class Complex{
    public:
    int real, img;

    void get(int r, int i){
        real = r;
        img = i;
    }
    Complex operator - (Complex o1){
        real -= o1.real;
        img -= o1.img;
        return *this;
    }
    void show(){
        cout<<"Subtraction of complex number is= "<<real<<" - i"<<img<<endl; 
    }
};
int main(){
    complex c1, c2, c3;
    c1.get(1, 2);c2.get(3, 4);
    c3= c1+c2;
    c3.show();
    Complex o1, o2, o3;
    o1.get(4, 5); o2.get(2, 3);
    o3 = o1-o2;
    o3.show();
    return 0;
}