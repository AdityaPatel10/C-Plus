#include<iostream>
#include<fstream>
using namespace std;
class student{
    public:
    string name;
    string roll;
    string age;
    void get(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter Roll No.: ";
        cin>>roll;
    }
};
int main(){
    student s1;
    s1.get();
    ofstream f1;
    f1.open("abc.txt", ios::out);
    f1.write((char*)&s1,sizeof(s1));
    f1.close();
    ifstream f2;
    f2.open("abc.txt",ios::in);
    f2.read((char*)&s1,sizeof(s1));
    f2.close();
    return 0;
}