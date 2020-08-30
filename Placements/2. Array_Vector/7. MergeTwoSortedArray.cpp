/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Merge two sorted array //recusrion and hashmap are alternate method with good time complexities
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1,2,2,2,3,3,3,5,6,7};
	int b[]={1,3,12,12,13,13,13,15,16,17};
	vector<int> v;
	int i=0,j=0;
	while(i+j<20)
	{
		if(a[i]<=b[j])
		{
			v.push_back(a[i++]);
		}
		else
		{
			v.push_back(b[j++]);
		}
	}
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
