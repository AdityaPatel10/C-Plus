#include <iostream>
#include <iomanip>
using namespace std;
class student
{
    string n1,n2,n3,n4,n5;
    float m1,m2,m3,m4,m5;
    
    public:
    void input(){
        cout<<"Enter 5 subject name and marks: "<<endl;
        cin>> n1;
        cin>> m1;
        cin>> n2;
        cin>> m2;
        cin>> n3;
        cin>> m3;
        cin>> n4;
        cin>> m4;
        cin>> n5;
        cin>> m5;
    }

    void output(){
        cout<<"Subject name: "<<n1;
        cout<<'\t'<<"    Marks: "<<m1<<endl;
        cout<<"Subject name: "<<n2;
        cout<<'\t'<<"    Marks: "<<m2<<endl;
        cout<<"Subject name: "<<n3;
        cout<<'\t'<<"    Marks: "<<m3<<endl;
        cout<<"Subject name: "<<n4;
        cout<<'\t'<<"    Marks: "<<m4<<endl;
        cout<<"Subject name: "<<n5;
        cout<<'\t'<<"    Marks: "<<m5<<endl;
    }
    void average(){
        float avg;
        avg= (m1+m2+m3+m4+m5)/5;
        cout<<"Average is: "<<avg;
    }
};
int main(){
    student s1;
    s1.input();
    s1.output();
    s1.average();
    return 0;
}