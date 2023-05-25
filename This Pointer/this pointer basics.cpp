#include <iostream> 
using namespace std;
class abc{
	int a;
	public:
	void set(int a){
		this->a=a;
	}
	void show(){
		cout<<"Value of a is= "<<a;
	}
};
int main (){
	abc o1;
	o1.set(10);
	o1.show();
}