#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    try{
        if(a==0){
            throw 10;
        }
        else if(a==2){
            throw 10.4;
        }
        else if(a==3){
            throw 'A';
        }
    }
    catch(char a){
        cout<<"Character exception is: "<<a;
    }
    catch(int a){
        cout<<"Integer exception is: "<<a;
    }
    catch(double a){
        cout<<"Float exception is: "<<a;
    }
    return 0;
}