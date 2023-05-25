#include<iostream>
using namespace std;
class Cube{
    public:
    void cube(int a){
        cout<<"Cube of "<<a<<" is: "<<a*a*a<<endl;
    }
    void cube(float a){
        cout<<"Cube of "<<a<<" is: "<<a*a*a<<endl;
    }
};
int main(){
    float x;
    int y;
    Cube c1, c2;
    cout<<"Enter float value: ";
    cin>>x;
    c1.cube(x);
    cout<<"Enter Integer value: ";
    cin>>y;
    c2.cube(y);
    return 0;
}