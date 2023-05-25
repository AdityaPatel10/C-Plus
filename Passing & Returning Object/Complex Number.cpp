#include<iostream>
using namespace std;
class complex{
    public:
    short int x, y;
    static int count;
    void get(){
        cout<<"Enter the value of x: ";
        cin>>x;
        cout<<"Enter the value of y: ";
        cin>>y;
    }
    void show(){
        cout<<"Complex no.["<<count<<"] is : "<<x<<" + "<<y<<"i"<<endl;
        count++;
    }
    complex sum(complex c1, complex c2){
        int real, img;
        real= c1.x+c2.x;
        img= c1.y+c2.y;
        cout<<"Sum of Real no. "<<c1.x<<" + "<<c2.x<<" is = "<<real<<endl;
        cout<<"Sum of imag no. "<<c1.y<<"i + "<<c2.y<<"i is = "<<img<<"i"<<endl<<endl;
        cout<<"New complex number obtained is = "<<real<<" + "<<img<<"i"<<endl;
    }
};
int complex::count=1;
int main(){
    complex c1, c2, c3;
    c1.get();
    c2.get();
    c1.show();
    c2.show();
    c3.sum(c1, c2);
    return 0;
}