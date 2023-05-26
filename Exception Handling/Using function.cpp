#include<iostream>
using namespace std;
int divide(int a, int b){
    if(b==0){
        throw b;
    }
    else{
        return a/b;
    }
}
int main(){
    int x, y, r;
    cout<<"Enter the values: ";
    cin>>x>>y;
    try{
        r= divide(x, y);
        cout<<"Division is= "<<r<<endl;
    }
    catch(int e){
        cout<<"Exception Found!"<<endl;
    }
    return 0;
}