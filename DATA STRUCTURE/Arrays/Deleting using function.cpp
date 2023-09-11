#include<iostream>
using namespace std; 
void Display(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<"   ";
    }
}
void Delete(int a[], int n){
    int pos;
    cout<<endl<<"Enter the position whose element you have to delete: ";
    cin>>pos;
    n=n-1;
    for(int i=pos-1; i<n; i++){
        a[i]=a[i+1];
    }
    Display(a, n);
}
int main(){
    int arr[]= {12, 23, 34, 45, 56, 67};
    int size= sizeof(arr)/sizeof(arr[0]);
    Display(arr, size);
    Delete(arr, size);
    return 0;
}