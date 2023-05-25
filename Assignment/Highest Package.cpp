#include<iostream>
using namespace std;
class company1{
    public:
    string name, des;
    float salary;
    void get(){
        cin>>name;
        cin>>des;
        cin>>salary;
    }
    void show(){
        cout<<"Name is = "<<name<<endl;
        cout<<name<<"'s designation is = "<<des<<endl;
        cout<<name<<"'s salary is = "<<salary<<endl;
    }
};
class company2{
    public:
    string name, des;
    float salary;
    void get(){
        cin>>name;
        cin>>des;
        cin>>salary;
    }
    void show(){
        cout<<"Name is = "<<name<<endl;
        cout<<name<<"'s designation is = "<<des<<endl;
        cout<<name<<"'s salary is = "<<salary<<endl;
    }
};
class company3{
    public:
    string name, des;
    float salary;
    void get(){
        cin>>name;
        cin>>des;
        cin>>salary;
    }
    void show(){
        cout<<"Name is = "<<name<<endl;
        cout<<name<<"'s designation is = "<<des<<endl;
        cout<<name<<"'s salary is = "<<salary<<endl;
    }
};
int main(){
    int l, m, n, i; 
    float sal1, sal2, sal3;
    string name1, name2, name3, des1, des2, des3;
    cout<<"enter the number of employees for company-1: ";
    cin>>l;
    company1 emp[l];

    cout<<"Input the name, designation & salary of the employees of company1: "<<endl;
    for(i=0; i<l; i++){
        emp[i].get();
    }
    cout<<endl<<"Displaying the name, designation & salary of the employees of company1: "<<endl;
    for(i=0; i<l; i++){
        emp[i].show();
    }
    cout<<"enter the number of employees for company-2: ";
    cin>>m;
    company2 em[m];

    cout<<"Input the name, designation & salary of the employees of company2: "<<endl;
    for(i=0; i<m; i++){
        em[i].get();
    }
    cout<<endl<<"Displaying the name, designation & salary of the employees of company2: "<<endl;
    for(i=0; i<m; i++){
        em[i].show();
    }
    cout<<"enter the number of employees for company-3: ";
    cin>>n;
    company3 e[n];

    cout<<"Input the name, designation & salary of the employees of company3: "<<endl;
    for(i=0; i<n; i++){
        e[i].get();
    }
    cout<<endl<<"Displaying the name, designation & salary of the employees of company3: "<<endl;
    for(i=0; i<n; i++){
        e[i].show();
    }

    sal1 = emp[0].salary;
    name1 = emp[0].name;
    des1 =emp[0].des;
    for(i=1; i<l; i++){
        if(emp[i].salary > sal1){
            sal1= emp[i].salary;
            name1= emp[i].name;
            des1=emp[i].des;
        }
    }

    sal2 = em[0].salary;
    name2 = em[0].name;
    des2 = em[0].des;
    for(i=1; i<m; i++){
        if(em[i].salary > sal2){
            sal2= em[i].salary;
            name2= em[i].name;
            des2= em[i].des;
        }
    }

    sal3 = e[0].salary;
    name3 = e[0].name;
    des3 = e[0].des;
    for(i=1; i<n; i++){
        if(e[i].salary > sal3){
            sal3= e[i].salary;
            name3= e[i].name;
            des3= e[i].des;
        }
    }
    cout<<endl<<"Highest package employee details are:-"<<endl;
    if(sal1 > sal2 && sal1 > sal3){
        cout<<"Name = "<<name1<<endl;
        cout<<name1<<"'s designation is = "<<des1<<endl;
        cout<<name1<<"'s salary is = "<<sal1<<endl;
    }
    else if(sal2 > sal1 && sal2 > sal3){
        cout<<"Name = "<<name2<<endl;
        cout<<name2<<"'s designation is = "<<des2<<endl;
        cout<<name2<<"'s salary is = "<<sal2<<endl;
    }
    else{
        cout<<"Name = "<<name3<<endl;
        cout<<name3<<"'s designation is = "<<des3<<endl;
        cout<<name3<<"'s salary is = "<<sal3<<endl;
    }
    return 0;
}