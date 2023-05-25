#include<iostream>
using namespace std;
class media{
    string t;
    int p;
    public:
    void getmedia(){
        cout<<"Enter Title: ";
        cin>>t;
        cout<<"Enter Price: ";
        cin>>p;
    }
    void putmedia(){
        cout<<"Title= "<<t<<endl;
        cout<<"Price= "<<p<<endl;
    }
};
class book : public media{
    int pages;
    public:
    void getbook(){
        cout<<"Enter details of book."<<endl;
        getmedia();
        cout<<"Enter Pages: ";
        cin>>pages;
    }
    void putbook(){
        cout<<"Details of book are:-"<<endl;
        putmedia();
        cout<<"Pages= "<<pages<<endl;
    }
};
class tape : public media{
    int play;
    public:
    void gettape(){
        cout<<"Enter details of tape."<<endl;
        getmedia();
        cout<<"Enter Playback time in minutes: ";
        cin>>play;
    }
    void puttape(){
        cout<<"Details of tape are:-"<<endl;
        putmedia();
        cout<<"Playback time= "<<play<<"minutes"<<endl;
    }
};
int main(){
    book b1;
    book *ptr;
    ptr = &b1;
    ptr->getbook();
    tape t1;
    tape *ptr1;
    ptr1 = &t1;
    ptr1->gettape();
    ptr->putbook();
    ptr1->puttape();
    return 0;
}