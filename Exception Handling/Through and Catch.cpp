#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    try{
        if(b==0){
            throw b;
        }
        else{
            cout<<"Division of "<<a<<" & "<<b<<" is= "<<(a/b)<<endl;
        }
    }
    catch(int d){
        cout<<a<<" Can't be divided by: "<<d<<endl;
    }
}