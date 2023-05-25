#include<iostream>
using namespace std;
class abc{
    public:
    int a;
    void get();
    void show();
};
void abc::get(){
    cout<<"Enter a: ";
    cin>>a;
}
void abc::show(){
    cout<<"A= "<<a<<endl;
}
int main(){
    abc o1;
    o1.get();
    o1.show();
    return 0;
}