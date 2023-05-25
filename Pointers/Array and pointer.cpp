#include<iostream>
using namespace std;
class array{
    public:
    int arr[3][3];
    void get(){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>arr[i][j];
            }
        }
    }
    void show(){
        int sum=0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout<<arr[i][j]<<"  ";
                sum += arr[i][j];
            }
            cout<<endl;
        }
        cout<<"sum is= "<<sum<<endl;
    }
    void largest(){
        int a;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(arr[i][j]>arr[i][j+1]){
                    a=arr[i][j];
                }
                else{
                }
            }
            cout<<endl;
        }
        cout<<a<<endl;
    }
};
int main(){
    array a1;
    array *ptr;
    ptr=&a1;
    ptr->get();
    ptr->show();
    ptr->largest();
    return 0;
}