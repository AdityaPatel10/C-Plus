#include<iostream>
using namespace std;
void swap(int arr[], int i, int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int Partition(int arr[], int l, int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l; j<r; j++){
        if(arr[j]<pivot){   
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, r);
        return (i+1);
}
void QuickSort(int arr[], int l, int r){
    if(l<r){
        int pi = Partition(arr, l, r);
        QuickSort(arr,l,pi-1);
        QuickSort(arr,pi+1,r);
    }
}
int main(){
    int arr[]= {40, 20, 10, 80, 60, 50, 7, 30, 100};
    int size= sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr, 0, size-1);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  "; 
    }
    return 0;
}