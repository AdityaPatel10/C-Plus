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
void Reverse(int arr[], int n){
    int j=0;
    n=n-1;
    while(j<n){
        int temp=arr[j];
        arr[j]=arr[n];
        arr[n]=temp;
        j++;
        n--;
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    Input(arr, n);
    cout<<"Normal Array:-"<<endl<<endl;
    Display(arr, n);
    cout<<"Reversed Array:-"<<endl<<endl;
    Reverse(arr, n);
    Display(arr, n);
}