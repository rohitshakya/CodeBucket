/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  Plus One leet code(66) 
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v={9,9,8,3};
	int n = v.size();
	int flag=0;
	for (int i = n - 1; i >= 0; --i)
	{
		if (v[i] == 9)
		v[i] = 0;
		else
		{
			v[i]++;
			break;
		}
	}
		if(v[0]==0)
		{
			v[0]=1;
			v.push_back(0);
		}
		for(auto i=v.begin();i!=v.end();i++)
		{
			cout<<*i<<" ";
		}
		
}
