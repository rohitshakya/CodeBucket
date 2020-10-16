/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : minimum number of operation in array to remove duplicates
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
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		unordered_map<int,int> m;
		for(int i=0;i<n;i++)
		{
			m[arr[i]]++;
		}
		int count=0;
		for(auto i=m.begin();i!=m.end();i++)
		{
			if ((*i).second > 1) 
            count += (*i).second-1;
		}
		cout<<count<<endl;
	}
}
