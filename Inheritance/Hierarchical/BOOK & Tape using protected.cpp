#include<iostream>
using namespace std;
class media{
    protected:
    string t;
    int p;
    public:
    virtual void get(){
    }
    virtual void put(){
    }
};
class book : public media{
    int pages;
    public:
    void get(){
        cout<<"Enter details of book."<<endl;
       // media::get();
        cout<<"Enter Title: ";
        cin>>t;
        cout<<"Enter Price: ";
        cin>>p;
        cout<<"Enter Pages: ";
        cin>>pages;
    }
    void put(){
        cout<<"Details of book are:-"<<endl;
        //media::put();
        cout<<"Title= "<<t<<endl;
        cout<<"Price= "<<p<<endl;
        cout<<"Pages= "<<pages<<endl;
    }
};
class tape : public media{
    int play;
    public:
    void get(){
        cout<<"Enter details of tape."<<endl;
        // media::get();
        cout<<"Enter Title: ";
        cin>>t;
        cout<<"Enter Price: ";
        cin>>p;
        cout<<"Enter Playback time in minutes: ";
        cin>>play;
    }
    void put(){
        cout<<"Details of tape are:-"<<endl;
        // media::put();
        cout<<"Title= "<<t<<endl;
        cout<<"Price= "<<p<<endl;
        cout<<"Playback time= "<<play<<"minutes"<<endl;
    }
};
int main(){
    media *ptr, *ptr1;
    book b1;
    ptr = &b1;
    ptr->get();
    tape t1;
    ptr1 = &t1;
    ptr1->get();
    ptr->put();
    ptr1->put();
    return 0;
}