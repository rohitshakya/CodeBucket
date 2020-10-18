/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==2||n==3)
	{
		cout<<"NO SOLUTION"<<endl;
		return 0;
	}
	if(n==4)
	{
		cout<<"2 4 1 3"<<endl;
		return 0;
	}
	if(n&1)
	{
		for(int i=n;i>=1;i=i-2)
		{
			cout<<i<<" ";
		}
		for(int i=n-1;i>1;i=i-2)
		{
			cout<<i<<" ";
		}
	}
	else
	{
		for(int i=n;i>0;i=i-2)
		{
			cout<<i<<" ";
		}
		for(int i=n-1;i>0;i=i-2)
		{
			cout<<i<<" ";
		}
	}
	
}
