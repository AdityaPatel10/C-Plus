#include<iostream>
using namespace std;
class a{
    public:
    int a, a1;
    void geta(){
        cout<<"Enter the value of a: ";
        cin>>a;
    }
    void geta1(){
        cout<<"Enter the value of a1: ";
        cin>>a1;
    }
};
class b : virtual public a{
    public:
    int b;
    void getb(){
        geta();
        cout<<"Enter the value of b: ";
        cin>>b;
    }
};
class c : virtual a{
    public:
    int c;
    void getc(){
        geta1();
        cout<<"Enter the value of c: ";
        cin>>c;
    }
};
class d : public b,c{
    public:
    int d;
    void getd(){
        getb();
        getc();
        cout<<"Enter the value of d: ";
        cin>>d;
    }
    void sum(){
        int sum;
        sum = a+a1+b+c+d;
        cout<<"Sum is= "<<sum<<endl;
    }
    void sub(){
        int sub;
        sub = a-a1-b-c-d;
        cout<<"Subtraction is= "<<sub<<endl;
    }
};
int main(){
    d x;
    x.getd();
    x.sum();
    x.sub();
}