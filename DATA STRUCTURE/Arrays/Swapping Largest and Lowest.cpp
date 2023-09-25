#include<iostream>
using namespace std;
void Input(int arr[], int n){
    cout<<"Input the elements of the array:-"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void Swap(int arr[], int n){
    int largest=arr[0], lowest=arr[0], larpos, lowpos;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
            larpos=i;
        }
        if(arr[i]<lowest){
            lowest=arr[i];
            lowpos=i;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]==arr[lowpos]){
            int temp=arr[i];
            arr[i]=arr[larpos];
            arr[larpos]=temp;
        }
    }
}
void Show(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    Input(arr, n);
    Swap(arr, n);
    cout<<"Swapped array is:-"<<endl;
    Show(arr, n);
    return 0;
}