#include<iostream>
using namespace std;
int main(){
    int n, i, j, m, srch, mid, lb, ub, fnd=1;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cout<<"Enter the value of a["<<i<<"]: ";
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i]>a[j]){
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }
    cout<<"Sorted array is:-"<<endl;
    for(i=0; i<n; i++){
        cout<<"Value of a["<<i<<"] is= "<<a[i]<<endl;
    }
    cout<<"Enter the element which you have to srch: ";
    cin>>srch;
    while(lb<=ub){
        mid= (0+n-1)/2;
        if(a[mid]==srch){
            fnd=0;
            break;
        }
        else if(a[mid]<srch){
            lb= mid+1;
        }
        else if(a[mid]>srch){
            ub=mid-1;
        }
    }
    if(fnd==0){
        cout<<srch<<" found in this array";
    }
    else{
        cout<<srch<<" not exist in this array.";
    }
    return 0;
}