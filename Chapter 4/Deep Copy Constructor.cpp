#include<iostream>
#include<string.h>
using namespace std;
class copyconstructor{
    char *s;
    public:
    copyconstructor(const char *str){
        s=new char[16];
        strcpy(s,str);
    }
    copyconstructor(copyconstructor&str){
        s=new char[16];
        strcpy(s,str.s);
    }
    void concat(const char *str){
        strcat(s,str);
    }
    ~copyconstructor(){
        delete[]s;
    }
    void dis(){
        cout<<s<<endl;
    }
};
int main(){
    copyconstructor c1("COPY ");
    copyconstructor c2 = c1;
    c1.dis();
    c2.dis();
    c1.concat("CONSTRUCTOR");
    c1.dis();
    c2.dis();
    return 0;
}