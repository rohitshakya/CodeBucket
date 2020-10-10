#include<iostream>
using namespace std;
int fact(int x);
int fac=1;
int main()
{
	int n;
	cout<<"enter no"<<endl;
	cin>>n;
	int z=fact(n);
	cout<<"factorial is:"<<z;
}
int fact(int x)
{
	
		fac=fac*x;
		--x;
		if(x>=1)
		{
			fact(x);
		}
		return fac;
	
}
