#include <iostream> 
using namespace std;
int main (){
	int a=10;
	int &r = a;
	cout<<r<<" ";
	a=2;
	cout<<r<<" "<<a;
	return 0; 
} 
