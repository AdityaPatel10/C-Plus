#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, digit, first, last, a, b, swaped;
    cout<<"Enter the value of n: ";
    cin>>n;
    digit=log10(n);
    first= n/(pow(10,digit));
    last= n%10;
    a=first*(pow(10,digit));
    b=n%a;
    n=b/10;
    swaped= last*(pow(10,digit))+(n*10+first);
    cout<<"First digit is: "<<first<<endl;
    cout<<"Last digit is: "<<last<<endl;
    cout<<"Swaped value is: "<<swaped;
    return 0;
}