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
	vector<int> v;
	for(int i=0;i<n-1;i++)
	{
		int m;
		cin>>m;
		v.push_back(m);
	}
	int res=0;
	for(int i=0;i<n-1;i++)
	{
		res=res^v[i]^(i+1);
	}
	cout<<(res^n);
	
}
