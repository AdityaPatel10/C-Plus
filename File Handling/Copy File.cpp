#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream f1, f2;
    f1.open("xyz.txt", ios::in);
    f2.open("zyx.txt", ios::out);
    string s;
    while(f1.eof()==0){
        getline(f1, s);
        cout<<s<<endl;
        f2<<s<<endl; 
    }
}