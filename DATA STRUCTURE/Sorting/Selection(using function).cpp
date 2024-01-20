#include<iostream>
using namespace std;
void Selection(int a[], int n){
    int i, j, temp, min;
    for(i=0 ; i<n-1 ; i++){
        min = i;
        for(j=i+1; j<n ; j++){
            if(a[i]<a[min])
                min=j;
        }
        if(min!=i){
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}       
void Display(int a[], int n){
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