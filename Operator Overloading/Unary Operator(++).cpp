#include<iostream>
using namespace std;
class test{
    int a;
    public:
    test(){
        cout<<"Enter the value of a: ";
        cin>>a;
    }
    test(int x){
        a= x;
    }
    void display(){
        cout<<"Value of a is= "<<a<<endl;
    }
    test operator ++(){
        //cout<<"Pre Increment"<<endl;
        ++a;
    }
    test operator ++(int){
        test t(a);
        //cout<<"Post increment"<<endl;
        a++;
        return t;
    }
};
int main(){
    test o1(2), o2(3), o3;
    ++o1;
    o1.display();
    o3.display();
    o2++;
    o2.display();
    o3 = o2++;
    o2.display();
    o3.display();
}