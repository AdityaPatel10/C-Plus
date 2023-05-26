#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream f("abc.txt");
    cout<<f.tellg()<<endl;
    char c = f.get();
    cout<<c<<endl;
    cout<<f.tellg()<<endl;
    f.seekg(3, ios::cur);
    cout<<f.tellg()<<endl;
    c=f.get();
    cout<<c<<endl;
    cout<<f.tellg()<<endl;
    f.seekg(7, ios::beg);
    cout<<"End: "<<f.tellg()<<endl;
    c=f.get();
    cout<<c<<endl;
    f.close();
    return 0;
}