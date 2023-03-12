#include<iostream>
using namespace std;
class area{
    int l, b;
    public:
    area(){
        cout<<"Default Constructor."<<endl;
        cout<<"Enter the length and Breadth of the rectangle: ";
        cin>>l>>b;
        cout<<"Length and Breadth of the rectangle are: "<<endl;
        cout<<l<<endl<<b<<endl;
    }
    void cal(){
        cout<<"Area of rectangle is: "<<l*b<<endl;
    }
    area(int x, int y){
        l=x;
        b=y;
        cout<<"Parameterised Constructor."<<endl;
        cout<<"Length and Breadth of the rectangle are: "<<endl;
        cout<<l<<endl<<b<<endl;
    }
    ~area(){
        cout<<"Destructor called.";
    }
};
int main(){
    area r1;
    r1.cal();
    int a, b;
    cout<<"Enter the length and Breadth of the rectangle for parameterised constructor: ";
    cin>>a>>b;
    area r2(a, b);
    r2.cal();
    return 0;
}