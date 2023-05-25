#include<iostream>
using namespace std;
class abc{
    public:
    int x, y;
    abc(){
        x=10;
        y=100;
    }
    abc(abc &a){
        x=a.x;
        y=a.y;
    }
    void show(){
        cout<<"X= "<<x<<endl<<"Y= "<<y<<endl;
    }
    ~abc(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    abc o1;
    o1.show();
    abc o2=o1;
    cout<<"Copied"
    o2.show();
}