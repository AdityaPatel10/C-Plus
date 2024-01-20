#include<iostream>
using namespace std;
void BS(int arr[], int n){
    for(int i=0; i<i-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int N, X;
        cin>>N>>X;
        int arr[N];
        for(int i=0; i<N; i++){
            cin>>arr[i];
        }
        BS(arr, N);
        int pass = arr[X-1];
        cout<<"Passing Marks= "<<pass<<endl;
    }
    return 0;
}