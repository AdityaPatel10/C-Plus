#include<iostream>
using namespace std;
class abc{
    public:
    int a=10;
    class def{
        public:
        int a=100;
    };
};
int main(){
    abc o1;
    abc::def o2;
    cout<<"A= "<<o2.a<<endl;
    cout<<"A= "<<o1.a<<endl;
    return 0;
}