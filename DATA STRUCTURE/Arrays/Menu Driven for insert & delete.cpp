#include<iostream>
using namespace std;
void Input(int a[], int n){
    cout<<"Input the elements of the array: "<<endl<<endl;
    for(int i=0 ; i<n; i++){
        cout<<"Enter the value of a["<<i<<"]: ";
        cin>>a[i];
    }
}
void Display(int a[], int n){
    cout<<"Displaying the elements of the array: "<<endl<<endl;
    for(int i=0; i<n; i++){
        cout<<"Value of a["<<i<<"] is= "<<a[i]<<endl;
    }
}
void Insert(int a[], int n, int in){
    int num;;
    cout<<"press 0 if you want to insert element to you specific position."<<endl;
    cout<<"press 1 to insert the element at the end of the array."<<endl;
    cin>>num;
    if(num==0){
        while(in>0){
            int pos;
            cout<<"Enter the position in which you want to insert the element: ";
            cin>>pos;
            n=n+1;
            for(int i=n-1; i>=pos; i--){
                a[i]=a[i-1];
                if(i==pos){
                    cin>>a[pos];
                    break;
                }
            }
            Display(a, n);
            in--;
        }
    }
    else if(num==1){
        int total=n+in;
        cout<<"Insert the element in the array: "<<endl;
        for(int i=n; i<total; i++){
            cout<<"Enter the value of a["<<i<<"]: ";
            cin>>a[i];
        }
        Display(a, total);
    }
    else{
        cout<<"Invalid choice"<<endl;
    }
}

void Delete(int a[], int n, int de){
    while(de>0){
        int pos;
        cout<<"Enter the position you want to delete: ";
        cin>>pos;
        n=n-1;
        for(int i=pos; i<n; i++){
            a[i]=a[i+1];
        }
        Display(a, n);
        de--;
    }
}
int main(){
    int size, choice, in, total, de; 
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    Input(arr, size);
    cout<<endl<<"Menu:-"<<endl;
    cout<<"Press 1 to insert new elements in to array: "<<endl;
    cout<<"Press 2 to delete the elements from array: "<<endl;
    cout<<"Press 3 to display the existing array: "<<endl;
    cin>>choice;
    switch(choice){
        case 1:{
            cout<<"How many elements you want to insert: ";
            cin>>in;
            Insert(arr, size, in);
            break;
        }
        case 2:{
            cout<<"How many elements you want to delete: ";
            cin>>de;
            Delete(arr, size, de);
            break;
        }
        case 3:{
            Display(arr, size);
            break;
        }
        default:{
            cout<<"Invalid choice."<<endl;
            break;
        }
    }
}