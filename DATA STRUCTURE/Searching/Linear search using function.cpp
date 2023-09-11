#include<iostream>
using namespace std;
void LinearSearch(int a[], int n){
    int srch, fnd=0, i;
    cout<<endl<<"Enter the element which you have to search: ";
    cin>>srch;
    for(i=0; i<n; i++){
        if(a[i]==srch){
            fnd=1;
            break;
        }
    }
    if(fnd==1){
        cout<<srch<<" found in "<<i+1<<" position"<<endl;
    }
    else{
        cout<<srch<<" not exist in the array"<<endl;
    }
}
void Display(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<"   ";
    }
}
int main(){
    int arr[]= {12, 3, 2, 1, 45, 30, 8};
    int size= sizeof(arr)/sizeof(arr[0]);
    Display(arr, size);
    LinearSearch(arr,size);
}