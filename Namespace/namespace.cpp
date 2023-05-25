#include<iostream>
using namespace std;
namespace first{
    void func(){
        cout<<"First Namespace."<<endl;
    }
}
namespace second{
    void func(){
        cout<<"Second Namespace."<<endl;
    }
}
int main(){
    second::func();
    first::func();
    return 0;
}