/*
 * Author : Rohit Shakya
 * Date   : April-2020
 *
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */
#include<iostream>
using namespace std;
int main()
{
	int i,j,p,n,o;
	cout<<"enter no of rows"<<endl;
	cin>>n;
	o=n;
	p=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		for(j=1;j<=2*o-1;j++)
		{
			cout<<" ";
		}
		o--;
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=1;i<=2*n+1;i++)
	cout<<"*";
	cout<<endl;
	for(i=1;i<=n;i++)
	{

		for(j=n;j>=i;j--)
		{
			cout<<"*";
		}
		for(j=1;j<=2*i-1;j++)
		{
			cout<<" ";
		}
		for(j=n;j>=i;j--)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
}


