#include <iostream>
using namespace std;
int main()
{
    int n, srch, i, fnd;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cout<<"Enter the value of a["<<i<<"]: ";
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        cout<<"Value of a["<<i<<"] is= "<<a[i]<<endl;
    }
    cout<<"Enter the element which you have to srch: ";
    cin>>srch;
    for(i=0; i<n; i++){
        if(a[i]==srch){
            fnd=0;
            break;
        }
        else{
            fnd=1;
        }
    }
    if(fnd==0){
        cout<<srch<<" found in "<<i+1<<" position of array";
    }
    else{
        cout<<srch<<" not exist in this array.";
    }
    return 0;
}