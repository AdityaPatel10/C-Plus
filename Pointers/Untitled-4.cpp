#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int *ptr;
    ptr= new int[n];
    for(int i=0; i<n; i++){
        cin>>*ptr[i];
    }
    for(int i=0; i<n; i++){
        cout<<"Value of ptr["<<i<<"] is= "<<*ptr[i]<<endl;
    }
    delete [] ptr;
    cout<<sizeof(ptr);
    return 0;
}