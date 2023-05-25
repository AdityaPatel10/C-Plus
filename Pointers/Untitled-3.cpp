#include<iostream>
using namespace std;
int main(){
    int *ptr;
    ptr= new int;
    cout<<"Enter Size: ";
    cin>>*ptr;
    cout<<*ptr<<endl;
    delete ptr;
    return 0;
}