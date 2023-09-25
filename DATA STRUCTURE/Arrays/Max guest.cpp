#include<iostream>
using namespace std;
//use sorting method when given time is not in order
void MaxGuest(int arr[], int dep[], int n){  //Function for Finding the maximum number of guest
    int i=1, j=0, in=1, max=1, time=arr[0];  //Declaring variables
    while(i<n && j<n){    //this loop will run while i<n and j<n
        if(arr[i]<=dep[j]){  //This condition will check whether arrival or departure time is greater
            in++;        //in= in+1
            if(in>max){   //this condition is used for checking in is greater than max
                max=in;   //if yes then max= in
                time=arr[i];  //and time will be arrival time at index i
            }
            i++;   //i=i+1
        }
        else{
            in--;   //else in=in-1
            j++;    //j=j+1
        }
    }
    cout<<"Maximum Number of Guests is "<<max<<" at time "<<time;
}
int main(){
    int arr[]={1, 2, 4, 7, 8, 12};    //This array is for arival time
    int dep[]={2, 7, 8, 12, 10, 15};  //This is for departure time
    int size= sizeof(arr)/sizeof(arr[0]);   //Calculating the size of array using sizeof() keyword
    MaxGuest(arr, dep, size);  //Calling the MaxGuest funtion for finding the maximum number of guest
}