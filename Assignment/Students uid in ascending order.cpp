#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int id;
    void get(){
        cin>>name;
        cin>>id;
    }
    void show(){
        cout<<"Student name = "<<name<<endl;
        cout<<name<<"'s UID = "<<id<<endl;
    }
};
int main(){
    int n, i, j, uid, min, t;
    string t1;
    cout<<"Enter the number of students: ";
    cin>>n;
    student s[n];
    
    cout<<"Enter student name and uid: "<<endl;
    for(i=0; i<n; i++){
        s[i].get();
    }
    cout<<endl<<"Displaying student name and uid: "<<endl<<endl;
    for(i=0; i<n; i++){
        s[i].show();
    }
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(s[i].id > s[j].id){
                t= s[i].id;
                s[i].id= s[j].id;
                s[j].id= t;
                t1= s[i].name;
                s[i].name= s[j].name;
                s[j].name= t1;
            }
        }
    }
    cout<<endl<<"Student list in ascending (uid) order is:-"<<endl<<endl;
    for(i=0; i<n; i++){
        cout<<i+1<<".) Name = "<<s[i].name<<"    -    ";
        cout<<"UID = "<<s[i].id<<endl;
    }
    return 0;
}