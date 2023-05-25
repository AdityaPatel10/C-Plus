#include<iostream>
using namespace std;
int SUM(int, int, int, int);
int main(){
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    int sum;
    sum= SUM(n, a, b, c);
    cout<<sum;
}
int SUM(int n, int a, int b, int c){
    if(n==1){
        return a;
    }
    else if(n==2){
        return b;
    }
    else if(n==3){
        return c;
    }
    int n_term;
    n_term = SUM(n-1, a, b, c) + SUM(n-2, a, b, c) + SUM(n-3, a, b, c);
    return n_term;
}