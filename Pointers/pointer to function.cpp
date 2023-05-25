#include<iostream>
using namespace std;
int *sum(int a, int b){
    int sum;
    sum = a+b;
    cout<<"Sum is= "<<sum;
}
int main(){
    sum(2, 3);
}