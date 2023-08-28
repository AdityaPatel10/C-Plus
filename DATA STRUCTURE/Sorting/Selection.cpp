#include<iostream>
using namespace std;
int main(){
    int n, loc, min, i, j, temp;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    for(i=0 ; i<n ; i++){
        cout<<"Enter the value of a["<<i<<"]: ";
        cin>>a[i];
    }
    for(i=0 ; i<n-1 ; i++){
        loc=i;
        for(j=i+1; j<n ; j++){
            if(a[loc]>a[j]){
                loc=j;
            }
        }
            if(loc!=i){
                temp=a[i];
                a[i]=a[loc];
                a[loc]=temp;
            }
    }
    cout<<"Sorted array:-"<<endl<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<"Value of a["<<i<<"]= "<<a[i]<<endl;
    }
}