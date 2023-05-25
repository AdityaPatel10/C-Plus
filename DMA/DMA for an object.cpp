#include<iostream>
using namespace std;
class Test{
    public:
    static int x;
    Test(){
        cout<<"Constructor["<<x<<"] called."<<endl;
        x++;
    }
    ~Test(){
        x--;
        cout<<"Destructor["<<x<<"] called."<<endl;
    }
};
int Test :: x=1;
int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    Test *t=new Test [n];
    delete [] t;
    return 0;
}