#include<iostream>
using namespace std;
class abc{
    public:
    int a, b;
    void get(){
        cout<<"Enter the values: ";
        cin>>a>>b;
    }
    int sum(abc x){
        return (x.a+x.b);
    }
};
int main(){
    abc o1, o2;
    o1.get();
    cout<<"Sum is= "<<o2.sum(o1);
    return 0;
}