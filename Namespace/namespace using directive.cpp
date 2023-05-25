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
using namespace second;
int main(){
    func();
    return 0;
}