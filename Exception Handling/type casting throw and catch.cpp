#include<iostream>
using namespace std;
int main(){
    try{
        throw(3.9);
    }
    catch(char a){
        int b;
        b=a;
        cout<<b;
    }
    catch(int a){
        char b;
        b=a;
        cout<<b;
    }
    catch(double a){
        int b;
        b=a;
        cout<<b;
    }
    return 0;
}