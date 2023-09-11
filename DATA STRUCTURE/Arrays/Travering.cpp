#include<iostream>
using namespace std;
void Traverse(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<"Value of a["<<i<<"] is= "<<a[i]<<endl;
    }
}
int main(){
    int arr[]= {12, 23, 34, 45, 56, 67};
    int size= sizeof(arr)/sizeof(arr[0]);
    Traverse(arr,size);
}