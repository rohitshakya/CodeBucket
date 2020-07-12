/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : remove adjacent similar elements 
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v={2,3,-5,5,6,3};
	stack<int> st;
	for(int i=0;i<v.size();i++)
	{
		
		if(!st.empty()&&(st.top()+v[i]==0)) st.pop();
		else st.push(v[i]);
	}
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	
}
