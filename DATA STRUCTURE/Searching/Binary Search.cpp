#include<iostream>
using namespace std;
int main(){
    int n, i, j, m, srch, mid, lb, ub, fnd=1;  //declaring variables.
    cout<<"Enter the size of array: ";
    cin>>n;    //n=size of the array. Here user will input the size of the array.
    int a[n];  //declaring array variable of size n.
    for(i=0; i<n; i++){   
        cout<<"Enter the value of a["<<i<<"]: ";
        cin>>a[i]; //With the help of this loop user will input the elements of the array.
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i]>a[j]){    //this condition is used for sorting of the array.
                m=a[i];    //When the condition is true the the current element will be stored in m.
                a[i]=a[j]; //in the current index value of next index will be stored.
                a[j]=m;  //Value of m will be stored in next index.
            }
        }
    }
    cout<<"Sorted array:-"<<endl; 
    for(i=0; i<n; i++){
        cout<<"Value of a["<<i<<"] is= "<<a[i]<<endl;  //this loop will display the sorted array.
    }
    cout<<"Enter the element which you have to search: ";
    cin>>srch;   //here srch variable is used to enter the element to search in the array.
    lb=0;
    ub=n;
    while(lb<=ub){ //lb=lower_bound, ub=upper_bound.
        mid= (lb+ub)/2; //mid=middle value of the array.
        if(a[mid]==srch){ //this condition will be true when the middle element is equal to searched element. 
            fnd=0; //fnd=found.
            break; //break keyword is used to terminate the loop.
        }
        else if(a[mid]<srch){  //this condition will be true when the middle element less than searched element.
            lb= mid+1; //if this condition is true then lower bound will be changed middle+1.
        }
        else if(a[mid]>srch){ //this condition will be true when the middle element is greater than searched element.
            ub=mid-1;  //if this condition is true then upper bound will be changed to middle-1. 
        }
    }
    if(fnd==0){   
        cout<<srch<<" found in "<<mid+1<<" position of the array"; //if the above condition is true then this statement will execute.
    }
    else{
        cout<<srch<<" not exist in this array."; //if the above condition is false then this statement will execute.
    }
    return 0;
}