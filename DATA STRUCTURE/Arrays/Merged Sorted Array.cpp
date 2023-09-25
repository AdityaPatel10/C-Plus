#include<iostream>
using namespace std;
void Input(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}
void Display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"    ";
    }
}
int Sort(int a[], int n){
    int i, j, temp;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){
    int n1,n2;
    cout<<"Enter the size of first array: ";
    cin>>n1;
    cout<<"Enter the size of second array: ";
    cin>>n2;
    int a1[n1],a2[n2];
    cout<<"Enter the elements of first array: ";
    Input(a1, n1);
    cout<<"Enter the elements of second array: ";
    Input(a2, n2);
    int i=0, j=0, k=0;
    int a[n1+n2];
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
    Sort(a, n1+n2);
    cout<<"Merged sorted Array is:-"<<endl;
    Display(a, n1+n2);
    return 0;
}