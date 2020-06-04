/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : String traversing through recursion 
 */
#include<bits/stdc++.h>
using namespace std;

int print(string s)
{
	if(s.length()==0)
	return 0;
	else
	{
	cout<<s[0];	
	print(s.substr(1));	
	}
	
}

int printrev(string s)
{
	if(s.length()==0)
	return 0;
	else
	{
	printrev(s.substr(1));
	cout<<s[0];	
	}
	
}
int main()
{
	//print string by recursion
	string s="abcdefghij";
	printrev(s);
	cout<<endl;
	print(s);
	cout<<endl;
}
