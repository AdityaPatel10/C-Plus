#include<iostream>
using namespace std;
class number{
    static int n;
    public:
    static void fun(){
        cout<<"Printing numbers: "<<endl;
        for(int x=1; x<11; x++){
            n++;
            cout<<n<<endl;
        }
    }
};int number:: n=0;
int main(){
    number n1;
    n1.fun();
    //number::fun();
    return 0;
}