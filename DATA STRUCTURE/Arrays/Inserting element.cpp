#include<iostream>
using namespace std;
int main(){
    int n, total, in, m, i, j;//n= size of an array, pos= position of an element
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
    cout<<"How many elements you want to insert in the array: ";
    cin>>in; //in= number of elements to be inserted into array.
    cout<<"Enter the element to insert in this array:-"<<endl;
    total=n+in; //total= old size + no. of elements to be inserted.
    for(i=n; i<total; i++){
        cin>>a[i];  //inserting element into array.
    }
    cout<<"Existing Array:-"<<endl;
    for(i=0; i<n; i++){
        cout<<a[i]<<"  ";  //displaying the elements of array array.
    }
    for(i=0; i<total; i++){  //this loop is used for sorting array elements.
        for(j=i; j<total; j++){
            if(a[i]>a[j]){
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }
    cout<<endl<<"New Array:-"<<endl;
    for(i=0; i<total; i++){
        cout<<a[i]<<"  ";  //displaying all the elements of the array.
    }
    return 0;
}