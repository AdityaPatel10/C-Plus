#include<iostream>
using namespace std;
int num(int, int, int);
int main(){
    int a, b, c;
    cout<< "Enter the value of a: ";
    cin>> a;
    cout<< "Enter the value of b: ";
    cin>> b;
    cout<< "Enter the value of c: ";
    cin>> c;
    num(a, b, c);
    return 0;
}
int num(int x, int y, int z){
    if(x>y && x>z)
    {
        cout<<"Greater value is : "<<x;
    }
    else if(y>z && y>x)
    {
        cout<<"Greater value is : "<<y;
    }
    else
    {
        cout<<"Greater value is : "<<z;
    }
}