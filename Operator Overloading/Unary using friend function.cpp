#include<iostream>
using namespace std;
class abc{
    public:
    int x, y;
    abc(){
        x= 1;
        y= 4;
    }
    friend abc operator ++(abc);
    void show(){
        cout<<"X= "<<x<<endl<<"Y= "<<y<<endl;
    }
};
abc operator ++(abc a){
    ++a.x;
    ++a.y;
    return a;
}
int main(){
    abc o1, o2;
    o2= ++o1;
    o2.show();
}