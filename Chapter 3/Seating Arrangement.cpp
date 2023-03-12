#include<iostream>
using namespace std;
class guest{
    public:
    string name;
    int num;
    static int x;
    void get(){
        cin>>name;
    }
    void abc(){
        num=x;
    }
    static void seat(){
        x++;
    }
    void show(){
        cout<<name<<"'s seat number is "<<num<<endl;
    }
};
int guest::x=1;
int main(){
    int n;
    cout<<"Enter the number of guest: ";
    cin>>n;
    guest g[n];
    cout<<"Enter the name of guests: "<<endl;
    for(int i=0; i<n; i++){
        g[i].get();
        g[i].abc();
        guest::seat();
    }
    cout<<"List of guests with their seat number are: "<<endl;
    for(int i=0; i<n; i++){
        g[i].show();
    }
    return 0;
}