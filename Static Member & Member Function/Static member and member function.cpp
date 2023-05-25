#include<iostream>
using namespace std;
class abc{
    static int x;
    public:
    static void print(){
        cout<<"X= "<<x<<endl;
    }
};
int abc::x=30;
int main(){
    abc o1;
    o1.print();
}