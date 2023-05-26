#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream f("xyz.txt");
    f<<"Hii My name is Aditya Patel";
    cout<<f.tellp()<<endl;
    f.seekp(-10, ios::end);
    cout<<f.tellp()<<endl;
    return 0;
}