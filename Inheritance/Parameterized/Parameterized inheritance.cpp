#include<iostream>
using namespace std;
class alpha{
    int x;
    public:
    alpha(int q){
        x= q;
        cout<<"Value of X is= "<<x<<endl;
    }
};
class beta{
    float y;
    public:
    beta(float r){
        y= r;
        cout<<"Value of Y is= "<<y<<endl;
    }
};
class gamma : public alpha , public beta{
    int a, b;
    public:
    gamma(int c, float d, int s, int t): alpha(c), beta(d){
        a= c;
        b= d;
        cout<<"Value of A is= "<<a<<endl;
        cout<<"Value of B is= "<<b<<endl;
    }
};
int main(){
    gamma o1(1, 2.3, 4, 5);
    return 0;
}