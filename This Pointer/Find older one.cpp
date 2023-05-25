#include<iostream>
using namespace std;
class Records{
    string name;
    int age;
    public:
    static int count;
    void get(){
        cout<<"Enter name["<<count<<"]: ";
        cin>>name;
        cout<<"Enter age["<<count<<"]: ";
        cin>>age;
        count++;
    }
    void show(){
        cout<<endl<<"Name is= "<<name<<endl;
        cout<<"Age is= "<<age<<endl;
    }
    Records operator > (Records x){
        cout<<endl<<"Eldest one is:-"<<endl;
        if(age>x.age){
            return *this;
        }
        else{
            return x;
        }
    }
};
int  Records::count=1;
int main(){
    Records o1[2], o2;
    Records *ptr;
    ptr= o1;
    for(int i=0; i<2; i++){
        ptr->get();
        ptr++;
    }
    for(int i=0; i<2; i++){
        ptr--;
    }
    for(int i=0; i<2; i++){
        ptr->show();
        ptr++;
    }
    o2 = o1[0]>o1[1];
    o2.show();
    return 0;
}