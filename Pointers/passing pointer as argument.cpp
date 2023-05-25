#include <iostream> 
using namespace std;
class abc{
	public:
	int a, b;
	friend int *sum(int*, int*);
};
int *sum(int *ptr, int *p){
	int *sum;
	sum= *ptr+*p;
	return *sum;
}
int main (){
	abc o1;
	abc *pt;
	pt = &o1;
	pt->a = 10;
	pt->b = 20;
	int *s;
	s= sum(&pt->a, &pt->b);
	cout<<"Sum is= "<<s;
	return 0;
} 
