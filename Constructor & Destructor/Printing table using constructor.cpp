#include<iostream>
using  namespace std;
class abc{
    int a;
    public:
    abc(){
        cout<<"Enter the value of a: ";
        cin>>a;
    }
    void table(){
        int t;
        for(int i=1; i<11; i++){
            t = a*i;
            cout<<t<<endl;
        }
        
    }
};
int main(){
    abc o1;
    o1.table();
    return 0;
}