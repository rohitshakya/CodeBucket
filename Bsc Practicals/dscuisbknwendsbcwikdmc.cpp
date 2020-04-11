#include<iostream>
using namespace std;
class rohit
{
	public:
	rohit operator--()//if we pass argument it makes postfix overloaded operator
	//and for postfix we have to pass int as argument only for increment or decrement operator
	{
		cout<<"rohit"<<endl;
	}
}r;
int main()
{
	--r;
}
