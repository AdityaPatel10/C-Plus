#include<iostream>
using namespace std;
void Input(int arr[], int n){
    cout<<"Input the elements of the array:-"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void Sort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void Show(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
}
void Add(int arr[], int n){
    cout<<"Lowest element: "<<arr[0]<<endl;
    cout<<"Largest element: "<<arr[n-1]<<endl;
    cout<<"Sum of Largest & Lowest element is: "<<arr[0]+arr[n-1]<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    Input(arr, n);
    Sort(arr, n);
    Add(arr, n);
    return 0;
}