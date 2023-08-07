#include<iostream>
using namespace std;
int main(){
    int n, pos;//n= size of an array, pos= position of an element
    cout<<"Enter the size of array:- ";
    cin>>n; //deifining the size of the array
    int a[n]; //declaring array of size n
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];   //inputting the elements of array, here i reperesens the index of the array
    }
    cout<<"Displaying the elements of array:-"<<endl<<endl;
    for(int i=0; i<n; i++){
        cout<<"Element of a["<<i<<"] is= "<<a[i]<<endl;  //displaying the elements of array
    }
    cout<<endl<<"Insert the element:-"<<endl;
    cout<<"Enter the position to insert the element-";
    cin>>pos;       //taking position to insert an element in the array
    cout<<"Enter the element of a["<<pos<<"]: ";
    cin>>a[pos];  //here  pos represents the position
    cout<<endl<<"Delete an element:-"<<endl;
    cout<<"Enter the position to delete the element-";
    cin>>pos;  //taking position to delete an element of the array
    int val=a[pos];  //here storing the deleted element inside variable val
    for(int i=pos; i<n-1; i++){
        a[i] = a[i+1];  //deleting the element
    }
    cout<<endl<<"Deleted element is:-"<<val<<endl<<endl;   //displaying the deleted element
    cout<<"Displaying the elements of new array:-"<<endl<<endl;
    for(int i=0; i<n-1; i++){
        cout<<"Element of a["<<i<<"] is= "<<a[i]<<endl;   //displaying the elemnts of the new array
    }
    return 0;
}