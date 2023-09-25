#include<iostream>
using namespace std;
void Input(int arr[], int n){
    cout<<"Input the elements of the array:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void Display(int arr[],  int n){
    for(int i=0; i<n; i++){
        cout<<"Value of arr["<<i<<"] is= "<<arr[i]<<endl;
    }
}
int Bubble(int a[], int n){
    int i, j, temp;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    cout<<k<<" Smallest element is= "<<a[k-1];
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    Input(arr, n);
    Bubble(arr, n);
}