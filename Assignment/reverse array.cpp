#include<iostream>
using namespace std;
int main(){
    int n, i;
    cin>>n;
    int arr[n];
    for(i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(i=n; i>0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}