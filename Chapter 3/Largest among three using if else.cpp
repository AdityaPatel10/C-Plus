#include<iostream>
using namespace std;
class min_max{
    public :
    inline int MAX(int , int , int );
    inline int MIN(int , int , int );
    int average(int , int);
};
inline int min_max::MAX(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}
inline int min_max::MIN(int a, int b, int c){
    if(a<b && a<c){
        return a;
    }
    else if(b<a && b<c){
        return b;
    }
    else{
        return c;
    }
}
int min_max::average(int u, int v){
    int a;
    a= (u+v)/2;
    return a;
}
int main(){
    min_max num, avg;
    int x, y, z, s, l, a;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    cout<<"Enter the value of z: ";
    cin>>z;
    s= num.MIN(x, y, z);
    cout<<"Smallest number is = "<<s<<endl;
    l= num.MAX(x, y, z);
    cout<<"Largest number is = "<<l<<endl;
    a= avg.average(s, l);
    cout<<"Average of smallest and largest number is = "<<a;
    return 0;
}