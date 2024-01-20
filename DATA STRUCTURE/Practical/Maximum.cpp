#include<iostream>
using namespace std;
int maximum(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            return arr[i];
        }
    }
}
int main(){
    int arr[]= {8, 10, 20, 80, 100, 200, 400, 500, 3, 2, 1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int MAX=arr[0];
    cout<<maximum(arr,size);
    return 0;
}

//Que= Find the maximum value if initially increasing and then decreasing