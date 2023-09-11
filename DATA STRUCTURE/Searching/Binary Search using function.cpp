#include<iostream>
using namespace std;
void Display(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<"     ";
    }
}
void SortArray(int a[], int n){
    int temp;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void BinarySearch(int a[], int n){
    int srch, lb, ub, mid, fnd=0;
    SortArray(a, n);
    cout<<endl<<"Enter the element which you have to search: ";
    cin>>srch;
    lb=0;
    ub=n;
    while(lb<=ub){
        mid=(lb+ub)/2;
        if(a[mid]==srch){
            fnd=1;
            break;
        }
        else if(a[mid]<srch){
            lb=mid+1;
        }
        else if(a[mid]>srch){
            ub=mid-1;
        }
    }
    if(fnd==1){
        cout<<srch<<" found in "<<mid<<" position"<<endl;
    }
    else{
        cout<<srch<<" not exist in the array"<<endl;
    }
}
int main(){
    int arr[]={7, 1, 6, 4, 8, 2, 3, 5};
    int size=sizeof(arr)/sizeof(arr[0]);
    SortArray(arr, size);
    Display(arr, size);
    BinarySearch(arr, size);
    return 0;
}