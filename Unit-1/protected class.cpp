#include<iostream>
using namespace std;
class abc{
    protected:
    int a;
    public:
    void get(){
        cout<<"Enter a: ";
        cin>>a;
    }
    void show(){
        cout<<"A= "<<a;
    }
};
int main(){
    abc o1;
    o1.get();
    o1.show();
    return 0;
}