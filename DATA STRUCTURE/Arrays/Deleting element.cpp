#include<iostream>
using namespace std;
int main(){
    int n, total, de, m, i, j, pos;//n= size of an array, pos= position of an element
    cout<<"Enter the size of array:- ";
    cin>>n; //defining the size of the array
    int a[n]; //declaring array of size n
    cout<<"Enter the elements of array:"<<endl;
    for(i=0; i<n; i++){
        cin>>a[i];   //inputting the elements of array, here i represents the index of the array
    }
    for(i=0; i<n; i++){
        for(j=i; j<n; j++){  //this loop is used for sorting the elements of array.
            if(a[i]>a[j]){
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }
    cout<<"Displaying the elements of array in ascending order:-"<<endl<<endl;
    for(i=0; i<n; i++){
        cout<<"Element of a["<<i<<"] is= "<<a[i]<<endl;  //displaying the elements of array
    }
    cout<<"How many elements you want to delete from the array: ";
    cin>>de; //in= number of elements to be inserted into array.
    while(de>0){  
        cout<<"Enter the position you want to delete: ";
        cin>>pos; //pos= index of the element you want to delete.
        n=n-1;
        for(j=pos; j<n; j++){    //this loop is used to delete elements from the array.
            a[j]=a[j+1];    
        }
        for(i=0; i<n; i++){
        cout<<"Element of a["<<i<<"] is= "<<a[i]<<endl;  //displaying the elements of array
        }
        de--;
    }
    total= n-de; //total= number of elements left in array. i.e. size-deleted elements.
    cout<<endl<<"New Array:-"<<endl;
    for(i=0; i<total; i++){
        cout<<a[i]<<"  ";  //displaying all the elements of the array.
    }
    return 0;
}