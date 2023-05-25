#include<iostream>
using namespace std;
class student{
    string name;
    int roll, height, weight;
    public:
    student(){
        cout<<"Enter the Name of the student: ";
        cin>>name;
        cout<<"Enter the Roll Number of the student: ";
        cin>>roll;
        cout<<"Enter the Height of the student: ";
        cin>>height;
        cout<<"Enter the Weight of the student: ";
        cin>>weight;
    }
    void display(){
        cout<<"Student Information:-"<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Roll Number = "<<roll<<endl;
        cout<<"Height = "<<height<<"cm"<<endl;
        cout<<"Weight = "<<weight<<"kg"<<endl;
    }
    ~student(){
        cout<<"Destructor called."<<endl;
    }
};
int main(){
    student s1;
    student s2=s1;
    s2.display();
    return 0;
}