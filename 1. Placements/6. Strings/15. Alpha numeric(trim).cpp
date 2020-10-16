/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  alpha numeric trimming example
 */
#include<bits/stdc++.h> 
using namespace std;
std::vector<std::string> splitCode(std::string item) {
	string s1="";
	string s2="";
	int m;
	for(int i=0;i<item.length();i++)
	{
		if((char)item[i]>57)
		{
			s1=s1+item[i];
		}
		else
		{
			m=i;
			break;
		}
	}
	for(int i=m;i<item.length();i++)
	{
			s2=s2+item[i];
	}
	return {s1,s2};
}
int main()
{
	vector<string> v=splitCode("rohit2345");
	cout<<v[0]<<endl<<v[1];
	
}
