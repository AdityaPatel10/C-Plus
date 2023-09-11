#include<iostream>
using namespace std;
void Get(int arr[], int n){
    cout<<"Input the elements of the array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void Reverse(int arr[], int n){
    int pos;
    cout<<"Enter the position to reverse the array: ";
    cin>>pos;
    cout<<"Reversed array:-"<<endl;
    for(int i=pos; i<n; i++){
        cout<<arr[i]<<"   ";
    }
    for(int i=0; i<pos; i++){
        cout<<arr[i]<<"   ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    Get(arr, size);
    Reverse(arr, size);
}