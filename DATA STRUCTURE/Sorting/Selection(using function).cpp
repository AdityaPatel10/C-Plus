#include<iostream>
using namespace std;
int *Selection(int a[], int n){
    int i, loc, j, temp;
    for(i=0 ; i<n-1 ; i++){
        loc=i;
        for(j=i+1; j<n ; j++){
            if(a[loc]>a[j]){
                loc=j;
            }
        }
            if(loc!=i){
                temp=a[i];
                a[i]=a[loc];
                a[loc]=temp;
            }
    }
    return a;
}       
// int *Swap(int a, int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
int Display(int a[], int n){
    for(int i=0 ; i<n ; i++){
        cout<<"Value of a["<<i<<"]= "<<a[i]<<endl;
    }
}
int main(){
    int n, i;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    for(i=0 ; i<n ; i++){
        cout<<"Enter the value of a["<<i<<"]: ";
        cin>>a[i];
    }
    Selection(a, n);
    Display(a, n);
}