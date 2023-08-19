#include <iostream>
using namespace std;
int main()
{
    int n, srch, i, fnd;   //declaring variables.
    cout<<"Enter the size of array: ";
    cin>>n;    //n=size of the array. Here user will input the size of the array.
    int a[n];  //declaring array variable of size n.
    for(i=0; i<n; i++){
        cout<<"Enter the value of a["<<i<<"]: ";
        cin>>a[i];   //With the help of this loop user will input the elements of the array.
    }
    cout<<"Displaying the array:-"<<endl;
    for(i=0; i<n; i++){
        cout<<"Value of a["<<i<<"] is= "<<a[i]<<endl; //this loop will display the elements of the array.
    }
    cout<<"Enter the element which you have to search: ";
    cin>>srch;   //here srch variable is used to enter the element to search in the array.
    for(i=0; i<n; i++){
        if(a[i]==srch){    //this condition will be true when the current element is equal to searched element.
            fnd=0;  //fnd=found.
            break;  //break keyword is used to terminate the loop.
        }
        else{
            fnd=1;
        }
    }
    if(fnd==0){
        cout<<srch<<" found in "<<i+1<<" position of the array";  //if the above condition is true then this statement will execute.
    }
    else{
        cout<<srch<<" not exist in this array.";  //if the above condition is false then this statement will execute.
    }
    return 0;
}