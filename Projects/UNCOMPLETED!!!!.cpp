#include<iostream>
using namespace std;
class student{
    string name;
    float marks[3];
    string subject[3];
    public:
    static int k;
    void get(){
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter the subject name and marks of "<<name<<": "<<endl;
        for(int i=0; i<3; i++){
            cin>>subject[i];
            cin>>marks[i];
        }
    }
    void show(){
        cout<<"Student name= "<<name<<endl;
        for(int i=0; i<3; i++){
            cout<<"Subject name= "<<subject[i]<<endl;
            cout<<"Marks= "<<marks[i]<<endl;
        }
    }
    void total(){
        int sum =0;
        for(int i=0; i<3; i++){
            sum += marks[i];
        }
        int add[k];
        add[k]=sum;
        cout<<k;
        cout<<"Total marks= "<<add[k]<<endl;
        k++;
    }
    void highest(){
        int add[k];
        for(int r=1; r<=k; r++){
            for(int s=r+1; s<=k; s++){
                if(add[r]>add[s]){
                    add[r];
                }
            }
            cout<<add[r];
        }
    }
};
int student::k=1;
int main(){
    int m, l[5];
    cout<<"Enter the number of students: ";
    cin>>m;
    student s[m];
    for(int j=0; j<m; j++){
        s[j].get();
    }
    for(int j=0; j<m; j++){
        s[j].show();
        s[j].total();
    }
    return 0;
}