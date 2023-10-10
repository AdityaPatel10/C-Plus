#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s1;
    s1.push(1);
    s1.push(7);
    s1.push(9);
    while(!s1.empty()){
        cout<<s1.top()<<"  ";
        s1.pop();
    }
}