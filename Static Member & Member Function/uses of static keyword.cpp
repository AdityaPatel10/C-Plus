#include <iostream>
using namespace std;
void input(){
    static int x=1;
    x= ++x;
    int y=1;
    y=++y;
    cout<<"x= "<<x<<"n"<<"   ";
    cout<<"y= "<<y<<"n"<<endl;
}
int main(){
    input();
    input();
    return 0;
}