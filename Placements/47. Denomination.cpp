/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(log n)
 * Title :  denomination, minimum num of coins
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	cout<<"number:"<<n<<endl;
	int min;
	if(n==3) min=2;
	else
	{
		for(int x=1;x<n;x++)
	{
		int t=(x*x)+x;
		if(t>n)
		{
			min=x;
			break;
		}
		
	}	
	++min;
	}
	cout<<min;
	}
}
