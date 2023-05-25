#include<iostream>
using namespace std;
class abc{
    public:
    int a;
    abc(int a){
        this->a=a;
    }
    friend abc operator ++(abc &);
    friend abc operator --(abc &, int);
    void show(){
        cout<<a;
    }
};
abc operator ++(abc &a1){  //pre increment;
    a1.a+=1;
    return a1;
}
abc operator --(abc &a1, int){ //post increment;
    a1.a-=1;
    return a1;
}
int main(){
    abc ab(1);
    ++ab;          //pre
    ab.show();
    ab--;        //post
    ab.show();
}