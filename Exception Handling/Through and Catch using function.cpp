#include<iostream>
using namespace std;
void Divide(float c, float d){
    try{
        if(d==0){
            throw d;
        }
            cout<<"Division of "<<c<<" & "<<d<<" is= "<<(c/d)<<endl;
    }
    catch(float e){
        cout<<c<<" Can't be divided by: "<<e<<endl;
    }
}
int main(){
    float a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    Divide(a,b);
    return 0;
}