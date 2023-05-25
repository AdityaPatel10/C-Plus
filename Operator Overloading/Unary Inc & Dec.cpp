#include<iostream>
using namespace std;
class abc{
    public:
    int x, y;
    abc(){
        x=9;
        y=0;
    }
    void operator ++();
    void operator ++(int);
    void operator --();
    void operator --(int);
    void show(){
        cout<<"X= "<<x<<endl;
        cout<<"Y= "<<y<<endl;
    }
};
void abc::operator --(int){
    x--;
    y--;
}
void abc::operator --(){
    --x;
    --y;
}
void abc::operator ++(int){
    x++;
    y++;
}
void abc::operator ++(){
    ++x;
    ++y;
}
int main(){
    abc o1;
    ++o1;
    ++o1;
    ++o1;
    cout<<"Pre-Increment"<<endl;
    o1.show();
    o1++;
    cout<<"Post-Increment"<<endl;
    o1.show();
    cout<<"Pre-Decrement"<<endl;
    --o1;
    o1.show();
    cout<<"Post-Decrement"<<endl;
    o1--;
    o1.show();
}