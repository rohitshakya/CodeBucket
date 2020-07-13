/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Rearrange array alternatively 2
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v={1,2,3,4,5,6,7,8,9,10};
	vector<int> res;
	for(int i=0;i<v.size()-1;i++)
	{
		int temp=v[i];
		v[i]=v[i+1];
		v[i+1]=temp;
		i++;
	}
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
