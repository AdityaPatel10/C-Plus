#include<iostream>
using namespace std;
class week{
    string day;
    int num;
    public:
    static int x;
    void get(){
        cin>>day;
    }
    void abc(){
        num=x;
    }
    static void days(){
        x++;
    }
    void show(){
        cout<<day<<" is "<<num<<" day of the week."<<endl;
    }
    void search(string srch){
        if(day==srch){
            cout<<day<<"is "<<num<<" day of the week";
        }
    }
    void src(int s){
        if(num==s){
    cout<<day<<"is "<<num<<" day of the week";
    }
    }
};
int week::x=1;
int main(){
    week t[7];
    cout<<"Input the days of the week: "<<endl;
    for(int i=0; i<7; i++){
        t[i].get();
        t[i].abc();
        t[i].days();
    }
    cout<<"Days of the week are: "<<endl;
    for(int i=0; i<7; i++){
        t[i].show();
    }
    string src;
    int enter, s;
    cout<<"How do you want to search by name or by day:- ";
    cout<<"Press '0' for searching by name and any number for searching by day number: ";
    cin>>enter;
    if(enter==0){
        cout<<"Enter the name of the day you want to search: ";
        cin>>src;
    }
    else{
        cout<<"Enter the day (1-7) you want to search: ";
        cin>>s;
    }
    
    for(int i=0; i<7; i++){
        t[i].search(src);
        t[i].src(s);
    }
    return 0;
}