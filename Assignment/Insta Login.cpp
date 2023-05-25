#include<iostream>
using namespace std;
class insta{
    string u, p, user, pass;
    public:
    insta(){
        user= "adii.10__";
        pass= "Aditya.543";
    }
    void LogIn(){
        for(int i=0; i<5; i++){
            cout<<"Enter the username: ";
            cin>>u;
            cout<<"Enter your password: ";
            cin>>p;
            if(u==user && p==pass){
                cout<<"Login Successfully!";
                break;
            }
            else{
                cout<<"Wrong username and password"<<endl;
            }
        }
    }
};
int main(){
    insta i1;
    i1.LogIn();
    return 0;
}