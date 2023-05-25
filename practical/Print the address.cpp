#include<iostream>
using namespace std;
int main(){
    int row, col, m, n, i, j, result, base_add, srch=0, flag=0;
    cout<<"Enter the number of rows of an array: ";
    cin>>row;
    cout<<"Enter the number of coloumns of an array: ";
    cin>>col;
    int arr[row][col];
    cout<<"Enter the values of matrix: "<<endl;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix wil be: "<<endl;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            cout<<"Value of arr["<<i<<"]["<<j<<"]: "<<arr[i][j]<<endl;
        }
    }
    cout<<"Enter the value you have to search: ";
    cin>>srch;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if(srch==arr[i][j]){
                flag= 1;
                m=i;
                n=j;
            }
        }
    }
    if(flag==1){
        cout<<"Value of m is: "<<m<<endl;
        cout<<"Value of n is: "<<n<<endl;
        base_add = 1000;
        result= base_add+sizeof(int)*(col*(m-0)+(n-0));
        cout<<"Address is: "<<result;
    }
    else{
        cout<<"Entered number is not in the matrix: ";
    }
    return 0;
}