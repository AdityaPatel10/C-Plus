#include<iostream>
using namespace std;
int Bubble(int a[], int n){
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
int Display(int a[], int n){
    for(int i=0 ; i<n ; i++){
        cout<<"Value of a["<<i<<"]= "<<a[i]<<endl;
    }
}
int main(){
    int n, i, j;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cout<<"Enter the value of a["<<i<<"]: ";
        cin>>a[i];
    }
    cout<<"Displaying normal array:-"<<endl<<endl;
    Display(a, n);
    Bubble(a, n);
    cout<<"Sorted array:-"<<endl<<endl;
    Display(a, n);
    return 0;
}