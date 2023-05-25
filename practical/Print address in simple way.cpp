#include<iostream>
using namespace std;
int main(){
    int row, col, m, n, i, j, result, base_add;
    cout<<"Enter the number of rows of an array: ";
    cin>>row;
    cout<<"Enter the number of coloumns of an array: ";
    cin>>col;
    int arr[row][col];
    cout<<"Enter the values of the matrix: "<<endl;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix will be: "<<endl;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            cout<<"Value of arr["<<i<<"]["<<j<<"]: "<<arr[i][j]<<endl;
        }
    }
    cout<<"Enter the value of m and n: ";
    cin>>m;cin>>n;
        base_add = 1000;
        result= base_add+sizeof(int)*(col*(m-0)+(n-0));
        cout<<"Address is: "<<result;
    return 0;
}