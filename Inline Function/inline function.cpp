#include<iostream>
using namespace std;
inline int sum(int a, int b){
    return a+b;
}
int main(){
    int x, y;
    cout<<"Enter Values: ";
    cin>>x>>y;
    cout<<"Sum is= "<<sum(x, y);
    return 0;
}