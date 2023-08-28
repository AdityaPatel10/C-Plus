#include<iostream>
using namespace std;
int *Insertion(int a[], int n){
    int temp, j;
    for(int i=1; i<n; i++){
        temp=a[i];
        j=i-1;
        while(temp<a[j] & j>=0){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    return a;
}
int Display(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<"Value of a["<<i<<"] is= "<<a[i]<<endl;
    }
}
int main(){
    int n, temp, j;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the value of a["<<i<<"]: ";
        cin>>a[i];
    }
    cout<<"Displaying array:-"<<endl<<endl;
    Display(a, n);
    Insertion(a, n);
    cout<<"Displaying array after insertion sorting:-"<<endl<<endl;
    Display(a, n);
    return 0;
}