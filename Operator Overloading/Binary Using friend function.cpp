#include<iostream>
using namespace std;
class abc{
    public:
    int a, b;
    abc(){
    }
    abc(int x, int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"Complex Number is= "<<a<<" + i"<<b;
    }
    friend abc operator +(abc, abc);
};
abc operator +(abc x, abc y){
    abc t;
    t.a = x.a+y.a;
    t.b = x.b+y.b;
    return t;
}
int main(){
    abc o1(3, 4), o2(4, 5), o3;
    o3= o1+o2;
    o3.show();
    return 0;
}