#include<iostream>
using namespace std;
class B;
class A{
    public:
    string username;
    A(){
        username= "adii.10__";
    }
    friend void merge(A a, B b);
};
class B{
    public:
    string password;
    B(){
        password= "Aditya.543";
    }
    friend void merge(A a, B b);
};
void merge(A a, B b){
    string u, p;
    for(int i=0; i<5; i++){
        cout<<"Enter the username: ";
        cin>>u;
        cout<<"Enter your password: ";
        cin>>p;
        if(u== a.username && p== b.password){
            cout<<"Login Successfully!";
            break;
        }
        else{
            cout<<"Wrong username and password"<<endl;
        }
    }
}
int main(){
    A i1;
    B i2;
    merge(i1, i2);
    return 0;
}