#include<iostream>
using namespace std;
class abc{
    string sub;
    int n;
    public:
    static int count;
    static float sum;
    void get(){
        cout<<"Enter subject name: ";
        cin>>sub;
        cout<<"Enter marks: ";
        cin>>n;
        sum += n;
    }
    void show(){
        cout<<"Subject name is= "<<sub<<endl;
        cout<<"Marks obtained is= "<<n<<endl;
        count++;
    }
    void average(){
        float avg;
        cout<<"Total numbers of subject is= "<<count<<endl;
        cout<<"Total marks is= "<<sum<<endl;
        avg= sum/count;
        cout<<"Average is= "<<avg<<endl;
    }
};
float abc::sum;
int abc::count;
int main(){
    int num;
    cout<<"Enter the number of subjects: ";
    cin>>num;
    abc o1[num];
    abc *ptr;
    ptr= &o1[0];
    for(int i=0; i<num; i++){
        ptr->get();
        ptr++;
    }
    for(int i=0; i<num; i++){
        ptr--;
    }
    for(int i=0; i<num; i++){
        ptr->show();
        ptr++;
    }
    ptr->average();
    return 0;
}