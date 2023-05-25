#include<iostream>
using namespace std;
class abc{
    public:
    int a;
    void show(){
        cout<<"A= "<<a;
    }
};
int main(){
    abc o1;
    o1.a=10;
    o1.show();
    return 0;
}