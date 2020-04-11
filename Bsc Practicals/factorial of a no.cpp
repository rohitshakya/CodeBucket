#include<iostream>
using namespace std;
void fact(int p);
int main()
{
	int z,n;
	cout<<"enter no"<<endl;
	cin>>n;
	fact(n);
}
void fact(int p)
{
	long double fact=1,i=1;
	for(i=1;i<=p;i++)
	{
		fact=fact*i;
	
	}
	cout<<"factorial of no is:"<<fact;
}
