#include <iostream>
using namespace std;
int main(){
    int a=0,b=1,c, n;
    cout<<"Enter the number upto where you have to print fibonacci: ";
    cin>>n;
    cout<<"Fibonacci series are: "<<endl;
    cout<<b<<endl;
    for(int i=1; i<n; i++){
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    a=0,b=1;
    cout<<"Missing numbers are: "<<endl;
    for(int i=1; i<n; i++){
        c=a+b;
        if(c-b > 1){
            for(int j=b+1; j<c; j++){
                cout<<j<<endl;
            }
        }
        a=b;
        b=c;
    }
    return 0;
}