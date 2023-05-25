#include<iostream>
using namespace std;
class abc{
    public:
    void sum(int a){
        cout<<"Sum= "<<a+a<<endl;
    }
    void sum(int a, float b){
        cout<<"Sum= "<<a+b<<endl;
    }
    void sum(int a, int b){
        cout<<"Sum= "<<a+b<<endl;
    }
    void sum(float a, float b){
        cout<<"Sum= "<<a+b<<endl;
    }
};
int main(){
    abc o1;
    float x, y;
    x=2.5;
    y=2.3;
    o1.sum(3);
    o1.sum(2,4);
    o1.sum(x, y);
    o1.sum(8, x);
    return 0;
}