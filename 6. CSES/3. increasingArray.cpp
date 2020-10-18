/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : 
 * Title : 
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		v.push_back(m);
	}
	int prev=v[0];
	long long min=0;
	for(int i=1;i<n;i++)
	{
		if(v[i]<prev)
		{
			min=min+(prev-v[i]);
		}
		else
		prev=v[i];
	}
	cout<<min<<endl;
}
