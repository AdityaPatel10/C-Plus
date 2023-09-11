#include<iostream>
using namespace std;
void Display(int a[], int n);
void Insert(int a[], int n){
    int pos;
    cout<<"Enter the position in which you want to insert the element: ";
    cin>>pos;
    n=n+1;
    for(int i=n-1; i>=pos; i--){
        a[i]=a[i-1];
        if(i==pos){
            cout<<"Enter the element to insert in a["<<i<<"]: ";
            cin>>a[pos];
            break;
        }
    }
    Display(a, n);
}
void Display(int a[], int n){
    cout<<"Displaying the elements of the array: "<<endl<<endl;
    for(int i=0; i<n; i++){
        cout<<"Value of a["<<i<<"] is= "<<a[i]<<endl;
    }
}
int main(){
    int arr[]= {12, 23, 34, 45, 56};
    int size= sizeof(arr)/sizeof(arr[0]);
    Display(arr, size);
    Insert(arr,size);
    return 0;
}