#include<iostream>
using namespace std;
int Peak(int arr[], int n){
    int peak, index;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]>arr[i-1]){
                peak=arr[j];
                index=j;
            }
        }
    }
    return index;
}
int main(){
    int arr[]={1, 2, 3, 1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<Peak(arr,size);

    return 0;
}