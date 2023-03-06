#include<iostream>
using namespace std;
class employee{
    string name, des;
    int age;
    double salary;
    public:
    void GetInfo(){
        cout<<"Enter the name of the employee: ";
        cin>>name;
        cout<<"Enter the age of the employee: ";
        cin>>age;
        cout<<"Enter the designation of the employee: ";
        cin>>des;
        cout<<"Enter the salary of the employee: ";
        cin>>salary;
    }
    void PutInfo(){
        cout<<"Employee name is: "<<name<<endl;
        cout<<"Employee age is: "<<age<<endl;
        cout<<"Employee designatin is: "<<des<<endl;
        cout<<"Employee salary is: "<<salary<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter the number of employes: ";
    cin>>n;
    employee emp[n];
    for(int i=0; i<n; i++){
        emp[i].GetInfo();
    }
    for(int i=0; i<n; i++){
        emp[i].PutInfo();
    }
    return 0;
}