#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream f2;
    f2.open("abc.txt", ios::in);
    char s[10];
    if(!f2){
        cout<<"No such file Created"<<endl;
    }
    else{
        f2>>s;
        cout<<"File is Created & its data is: "<<endl<<s;
    }
    f2.close();
    return 0;
}