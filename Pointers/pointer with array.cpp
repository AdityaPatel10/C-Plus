#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr, n;
    ptr=arr;
    cout<<"Enter the number you have to search: ";
    cin>>n;
    for(int i=0; i<10; i++){
        if(*ptr==n){
            cout<<n<<" is present in the array in "<<i+1<<"th position";
            break;
        }
        else if(i==9){
            cout<<n<<" is not present in the array.";
        }
        ptr++;
    }
    return 0;
}