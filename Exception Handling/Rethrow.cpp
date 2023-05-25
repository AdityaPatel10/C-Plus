#include<iostream>
using namespace std;
int main(){
    int a, b;
    try{
        try{
            throw 20;
        }
        catch(int e){
            cout<<"Exception found"<<endl;
        }
        throw 7;
    }
    catch(...){
        cout<<"Exception still there"<<endl;
    }
}