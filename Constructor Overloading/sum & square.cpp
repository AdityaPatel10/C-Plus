#include<iostream>
using namespace std;
class abc{
    public:
    abc(int a){
        cout<<"Square= "<<a*a<<endl;
    }
    abc(int a, int b){
        cout<<"Sum= "<<a+b<<endl;
    }
    ~abc(){}
};
int main(){
    abc o1(3), o2(5, 9);
    return 0;
}