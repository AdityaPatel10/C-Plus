#include<iostream>
using namespace std;
class abc{
    int a, b;
    public:
    void get(){
        cout<<"Enter the value of a and b: "<<endl;
        cin>>a>>b;
    }
    friend void sum(abc t1);
};
void sum(abc t1){
    int sum=0;
    sum= t1.a+t1.b;
    cout<<"Sum of ["<<t1.a<<"] & ["<<t1.b<<"]= "<<sum;
}
int main(){
    abc o1;
    o1.get();
    sum(o1);
    return 0;
}