#include<iostream>
using namespace std;
int a=0;
int main(){
    int a=10;
    cout<<"Printing the value of a: "<<a<<endl;
    cout<<"Printing the value of a using scope resolution: "<<::a<<endl;
    return 0;
}