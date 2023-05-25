#include<iostream>
using namespace std;
class abc{
    public:
    int a, b, add;
    void get(){
        cout<<"Enter values: ";
        cin>>a>>b;
    }
    friend int sum(abc);
};
int sum(abc c){
    return (c.a+c.b);
}
int main(){
    abc o1;
    o1.get();
    cout<<"Sum is= "<<sum(o1);
    return 0;
}