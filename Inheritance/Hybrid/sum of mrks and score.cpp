#include<iostream>
using namespace std;
class student{
    public:
    int id;
    void getid(){
        cout<<"Enter UID: ";
        cin>>id;
    }
    void showid(){
        cout<<"UID is= "<<id<<endl;
    }
};
class test : virtual public student{
    public:
    string sub1, sub2, sub3;
    int m1, m2, m3;
    void getmarks(){
        cout<<"Enter subject name: ";
        cin>>sub1;
        cout<<"Enter marks: ";
        cin>>m1;
        cout<<"Enter subject name: ";
        cin>>sub2;
        cout<<"Enter marks: ";
        cin>>m2;
        cout<<"Enter subject name: ";
        cin>>sub3;
        cout<<"Enter marks: ";
        cin>>m3;
    }
    void showmarks(){
        cout<<"Subject Name is= "<<sub1<<"     ";
        cout<<"Marks obtained is= "<<m1<<endl;
        cout<<"Subject Name is= "<<sub2<<"     ";
        cout<<"Marks obtained is= "<<m2<<endl;
        cout<<"Subject Name is= "<<sub3<<"     ";
        cout<<"Marks obtained is= "<<m3<<endl;
    }
};
class sport : virtual public student{
    public:
    int score;
    void getscore(){
        cout<<"Enter the sport score: ";
        cin>>score;
    }
    void showscore(){
        cout<<"Sport score is= "<<score<<endl;
    }
};
class result : public test, public sport{
    public:
    int sum=0;
    void Sum(){
        showid();
        showmarks();
        showscore();
        sum= m1+m2+m3+score;
        cout<<"Sum of marks and sports score is= "<<sum;
    }
};
int main(){
    result obj;
    obj.getid();
    obj.getmarks();
    obj.getscore();
    obj.Sum();
    return 0;
}