#include<iostream>
using namespace std;
int main(){
    string enter;
    int n, yes=0, r=0;
    cout<<"Enter the number of products: ";
    cin>>n;
    string name[n];
    int rate[n];
    for(int i=0; i<n; i++){
        cin>>name[i];
        cin>>rate[i];
    }
    for(int i=0; i<n; i++){
        cout<<i+1<<"."<<"Product name is: "<<name[i]<<endl;
        cout<<"Price is: "<<rate[i]<<endl;
    }
    for(int j=0; j<n; j++){
        cout<<"Enter 0 if you want to buy our product or press 1 for exit: ";
        cin>>yes;
        if(yes==0){
            cout<<"Enter the name of the product: ";
            cin>>enter;
            for(int i=0; i<n; i++){
                if(enter==name[i]){
                    r+=rate[i];
                }
            }
        }
        else{
            break;
        }
    }
    cout<<"You have to pay "<<r<<" Rs.";
    return 0;
}