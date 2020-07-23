/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : smallest element on the left side
 */
#include<bits/stdc++.h>
using namespace std;
vector<int> fun(vector<int> &v)
{
	int n=v.size();
	vector<int> res(n);
	res[0]=-1;
	int min=v[0];
	for(int i=1;i<n;i++)
	{
		if(v[i]<min)
		{
			min=v[i];
		}
		res[i]=min;
	}
	return res;
}
int main()
{
	vector<int> v={3,4,1,22,7,8,12};
	vector<int> res=fun(v);
	for(int i=0;i<v.size();i++)
	{
		cout<<res[i]<<" ";
	}
}
