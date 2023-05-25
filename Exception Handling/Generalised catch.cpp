#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    try{
        if(a==1){
            int b=1;
            throw b;
        }
        else if(a==2){
            char b='a';
            throw b;
        }
        else if(a==3){
            double b = 1.1;
            throw b;
        }
    }
    catch(...){
        cout<<"Exception found..";
    }
    return 0;
}