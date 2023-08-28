#include<iostream>
using namespace std;
int main(){
    int n, temp, j;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the value of a["<<i<<"]: ";
        cin>>a[i];
    }
    for(int i=1; i<n; i++){
        temp=a[i];
        j=i-1;
        while(temp<a[j] & j>=0){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    cout<<"Sorted array:-"<<endl<<endl;
    for(int i=0; i<n; i++){
        cout<<"Value of a["<<i<<"]= "<<a[i]<<endl;
    }
} 