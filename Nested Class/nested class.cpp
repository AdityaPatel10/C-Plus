#include<iostream>
using namespace std;
class outside {
    public:
    class inside{
        int c;
        public:
        class b{
        int a;
        public:
        void get(){
            cout<<"Enter the value of a: ";
            cin>>a;
        }
        void show(){
            cout<<"Value of a is= "<<a<<endl;
        }
    };
    void ge(){
        cout<<"Enter the value of b: ";
        cin>>c;
        cout<<"Value of b is= "<<c<<endl;
    }
    };
};
int main(){
    outside::inside::b o;
    o.get();
    o.show();
    outside::inside n;
    n.ge();
    return 0;
}