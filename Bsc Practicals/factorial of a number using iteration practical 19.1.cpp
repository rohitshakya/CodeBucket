#include<iostream>
using namespace std;
void fact(int x);
int main()
{
	int n;
	cout<<"enter no"<<endl;
	cin>>n;
	fact(n);
}
void fact(int x)
{
	long double fact=1,i=1;
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
	
	}
	cout<<"factorial of no is:"<<fact;
}
