#include <iostream>
using namespace std;
class abc{
    int i;
    public:
void fizzBuzz(int n) {
    for(i=1; i<=n; i++){
        if(i%3==0 && i%5==0){
            cout<<"FizzBuzz"<<endl;
        }
        else if(i%3==0){
            cout<<"Fizz"<<endl;
        }
        else if(i%5==0){
            cout<<"Buzz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}
};
int main()
{
    abc obj;
    int n;
    cin>>n;
    obj.fizzBuzz(n);  
}
