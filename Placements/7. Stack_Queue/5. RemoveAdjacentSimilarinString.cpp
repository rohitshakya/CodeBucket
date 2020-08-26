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
	string s="google";
	stack<char> st;
	for(int i=0;i<s.length();i++)
	{
		if(!st.empty()&&st.top()==s[i]) st.pop();
		else st.push(s[i]);
	}
	string s3="";
	while(!st.empty())
	{
		s3=st.top()+s3;
		st.pop();
	}
	cout<<s3;
}
