#include<iostream>
using namespace std;
class test{
    public:
    int a;
    void show(){
        cout<<"Value of A is= "<<a<<endl;
    }
};
int main(){
    test t1;
    test *ptr;
    ptr = &t1;
    ptr->a= 1;
    ptr->show();
    return 0;
}