#include<iostream>
using namespace std;
int factorial(int x)
{
	if (x==1)
	{
		return x;
	}
	return x*factorial(x-1);
	
	
}
int main()
{
	int z;
	cout<<"factorial is"<<endl;
	z=factorial(5);
	cout<<z;
}//sheetal.2109@yahoo.im

