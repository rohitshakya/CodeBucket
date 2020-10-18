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
	string s;
	cin>>s;
	int max=0;
	int count=0;
	char prev=s[0];
	for(int i=1;i<s.length();i++)
	{
		if(s[i]==prev) count++;
		else 
		{
			count=0;
			prev=s[i];	
		}
		if(count>max) max=count;
	}	
	cout<<max+1;
}
