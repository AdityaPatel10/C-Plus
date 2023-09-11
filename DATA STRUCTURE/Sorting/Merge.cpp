#include<iostream>
using namespace std;
void Merge(int a[], int l, int mid, int r){
    int n1= mid-l+1;
    int n2= r-mid;
    int a1[n1], a2[n2];    //temporary array
    for(int i=0; i<n1; i++){
        a1[i]= a[l+i];
    }
    for(int i=0; i<n2; i++){
        a2[i]= a[mid+i+1];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a1[i]<a2[j]){
            a[k]=a1[i];
            k++;
            i++;
        }
        else{
            a[k]= a2[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        a[k]=a1[i];
        k++;
        i++;
    }
    while(j<n2){
        a[k]=a2[j];
        k++;
        j++;
    }
}
void MergeSort(int a[], int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        MergeSort(a, l, mid);
        MergeSort(a, mid+1, r);
        Merge(a, l, mid, r);
    }
}
void Display(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<"    ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cout<<"Enter the value of a["<<i<<"]: ";
        cin>>a[i];
    }
    MergeSort(a, 0, n);
    Display(a, n);
}