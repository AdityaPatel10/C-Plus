#include<iostream>
using namespace std;
int main(){
    int n, count=0,t;
    cin>>n;
    int arr[n];
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
    cout<<arr[0];
    for(int i=1; i<n; i++){
            arr[i]=0;
            count++;
    }
    cout<<"NO. of operations= "<<count-1;
}