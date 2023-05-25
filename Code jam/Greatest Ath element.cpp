#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Element number: ";
    cin>>m;
    int arr[n], t;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
        if(arr[j] > arr[i]){
            t = arr[j];
            arr[j]=arr[i];
            arr[i]=t;
        }
        }
    }
    cout<<"["<<m<<"] greatest element is: "<<arr[m-1];   
}