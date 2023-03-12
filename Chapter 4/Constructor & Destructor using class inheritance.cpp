#include<iostream>
using namespace std;
class a{
    public:
    a(){
        cout<<"A Constructor called."<<endl;
    }
    ~a(){
        cout<<"A Destructor called."<<endl;
    }
};
class b:a{
    public:
    b(){
        cout<<"B Constructor called."<<endl;
    }
    ~b(){
        cout<<"B Destructor called."<<endl;
    }
};
int main(){
    b c;   
}