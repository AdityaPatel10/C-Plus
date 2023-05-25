#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout<<"Enter the number of students: ";
    cin>>n;
    int *arr=new int [n];
    for(int i=0; i<n; i++){
        cout<<"Enter marks of student["<<i+1<<"]: ";
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum of marks of "<<n<<" students is= "<<sum;
    delete[](arr);
    return 0;
}