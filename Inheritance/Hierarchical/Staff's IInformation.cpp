#include<iostream>
using namespace std;
class staff{
    int code;
    string name;
    public:
    void getstaff(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter code: ";
        cin>>code;
    }
    void showstaff(){
        cout<<"Name is= "<<name<<endl;
        cout<<"Code is= "<<code<<endl;
    }
};
class teacher : public staff{
    string sub, pub;
    public:
    void getteacher(){
        getstaff();
        cout<<"Enter subject name: ";
        cin>>sub;
        cout<<"Enter publication: ";
        cin>>pub;
    }
    void showteacher(){
        showstaff();
        cout<<"Subject Name is= "<<sub<<endl;
        cout<<"Publication is= "<<pub<<endl;
    }
};
class officer : public staff{
    string grade;
    public:
    void getofficer(){
        getstaff();
        cout<<"Enter Grade: ";
        cin>>grade;
    }
    void showofficer(){
        showstaff();
        cout<<"Grade is= "<<grade<<endl;
    }
};
class typist : public staff{
    public:
    int s, wage;
    void gettypist(){
        getstaff();
    }
    void showtypist(){
        showstaff();
    }
};
class wages : public typist{
    public:
    void getwage(){
        cout<<"Enter Dailywages: ";
        cin>>wage;
    }
    void showwage(){
        cout<<"DailyWage is= "<<wage<<endl;
    }
};
class speed : public typist{
    public:
    void getspeed(){
        gettypist();
        cout<<"Enter speed: ";
        cin>>s;
    }
    void showspeed(){
        showtypist();
        cout<<"Speed is= "<<s<<endl;
    }
};
int main(){
    int n, num, i;
    menu:
    cout<<endl<<endl;
    cout<<"Enter your choice:-"<<endl;
    cout<<"Press 1 for Teacher's information."<<endl;
    cout<<"Press 2 for Officers's information."<<endl;
    cout<<"Press 3 for Typist's information."<<endl;
    cout<<"Press any number to exit."<<endl;
    cin>>n;
    switch(n){
        case 1:{
            cout<<"Enter number of techers: ";
            cin>>num;
            teacher t[num];
            cout<<endl<<"GETTING TEACHER'S INFORMATION"<<endl;
            for(i=0; i<num; i++){
                t[i].getteacher();
            }
            cout<<endl<<endl<<"TEACHER'S INFORMATION:-"<<endl<<endl;
            for(i=0; i<num; i++){
                t[i].showteacher();
            }
        }
        goto menu;
        case 2:{
            cout<<"Enter number of officers: ";
            cin>>num;
            officer o[num];
            cout<<endl<<"GETTING OFFICER'S'S INFORMATION"<<endl;
            for(i=0; i<num; i++){
                o[i].getofficer();
            }
            cout<<endl<<endl<<"OFFICER'S INFORMATION:-"<<endl<<endl;
            for(i=0; i<num; i++){
                o[i].showofficer();
            }
        }
        goto menu;
        case 3:{
            cout<<"Enter number of typists: ";
            cin>>num;
            speed s[num];
            wages w[num];
            cout<<endl<<"GETTING TYPIST'S INFORMATION"<<endl;
            for(i=0; i<num; i++){
                s[i].getspeed();
                w[i].getwage();
            }
            cout<<endl<<endl<<"TYPIST'S INFORMATION:-"<<endl<<endl;
            for(i=0; i<num; i++){
                s[i].showspeed();
                w[i].showwage();
            }
        }
        goto menu;
        default:{
            cout<<"Have A Nice Day!";
        }
    }
    return 0;
}