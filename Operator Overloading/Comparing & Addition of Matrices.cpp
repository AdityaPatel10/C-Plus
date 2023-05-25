#include<iostream>
using namespace std;
class Matrix{
    public:
    int arr[2][2], sum=0;
    Matrix(int a, int b, int c, int d){
        arr[0][0]= a;
        arr[0][1]= b;
        arr[1][0]= c;
        arr[1][1]= d;
    }
    void operator == (Matrix m1){
        cout<<"Comparision of Matrices are:-"<<endl;
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                if(arr[i][j] == m1.arr[i][j]){
                    cout<<"Value of a["<<i<<"]["<<j<<"]("<<arr[i][j]<<") is equal to b["<<i<<"]["<<j<<"]("<<m1.arr[i][j]<<")."<<endl;
                }
                else{
                    cout<<"Value of a["<<i<<"]["<<j<<"]("<<arr[i][j]<<") is not equal to b["<<i<<"]["<<j<<"]("<<m1.arr[i][j]<<")."<<endl;
                }
            }
        }
    }
    void operator + (Matrix m1){
        cout<<"Addition of Matrices are:-"<<endl;
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                sum= arr[i][j] + m1.arr[i][j];
                cout<<sum<<"   ";
            }
            cout<<endl;
        }
    }
};
int main(){
    int a[2][2], b[2][2];
    cout<<"Enter the values of Matrix A:-"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Enter the value of a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    cout<<"Enter the values of Matrix B:-"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Enter the value of b["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];
        }
    }
    cout<<"Matrix A is:-"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<a[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<"Matrix B is:-"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<b[i][j]<<"   ";
        }
        cout<<endl;
    }
    Matrix o1(a[0][0], a[0][1], a[1][0], a[1][1]), o2(b[0][0], b[0][1], b[1][0], b[1][1]);
    o1==o2;
    o1+o2;
    return 0;
}