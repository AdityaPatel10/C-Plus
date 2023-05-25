#include<iostream>
using namespace std;
class abc{
    public:
    int a;
    abc(int a){
        this->a=a;
    }
    friend void operator * (abc, abc);
};
void operator * (abc a1, abc a2){
    cout<<a1.a*a2.a;
}
int main(){
    abc a1(1), a2(3);
    a1*a2;
}