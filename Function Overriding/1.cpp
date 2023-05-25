#include<iostream>
using namespace std;
class abc{
    public:
    void print(){
        cout<<"Hey Love"<<endl;
    }
};
class def : public abc{
    public:
    void print(){
        cout<<"Hey Gorgeous"<<endl;
    }
};
int main(){
    def o1;
    o1.print();
    o1.abc::print();
    return 0;
}