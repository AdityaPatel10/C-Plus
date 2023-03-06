#include<iostream>
using namespace std;
class fact{
    int a;
    public:
    void get(){
        cout<<"Enter the value of a: ";
        cin>>a;
    }
    fact factorial(fact o1){
        int result=1;
        for(int i=1; i<=o1.a; i++){
            result *= i;
        }
        cout<<result;
    }
};
int main(){
    fact f1, f2;
    f1.get();
    f2.factorial(f1);
}