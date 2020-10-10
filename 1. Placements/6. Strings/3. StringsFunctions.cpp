/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Strings 
 */
#include<bits/stdc++.h>
using namespace std;
void sortString(string &s)
{
	sort(s.begin(),s.end());
	cout<<s;
}

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

int printRev(string s)
{
	if(s.length()==0)
	return 0;
	else
	{
		printRev(s.substr(1));
		cout<<s[0];
	}
	
}
int main()
{
	//print string by recursion
	string s="abcdeasdffghij";
	print(s);
	cout<<endl;
	printRev(s);
	cout<<endl;
	sortString(s);
}
