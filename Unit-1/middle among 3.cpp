#include<iostream>
using namespace std;
int middle(int, int, int);
int main(){
    int a, b, c, mid;
    cout<< "Enter the value of a: ";
    cin>> a;
    cout<< "Enter the value of b: ";
    cin>> b;
    cout<< "Enter the value of c: ";
    cin>> c;
    mid = middle(a, b, c);
    cout<< "The middle value among three numbers is: "<<mid;
    return 0;
}
int middle(int x, int y, int z){
    if((x>y && x>z && z>y) || (y>z && y>z && z>x)){
        return z;
    }
    else if((x>y && x>z && y>z) || (z>x && z>y && z>x)){
        return y;
    }
    else{
        return x;
    }
}