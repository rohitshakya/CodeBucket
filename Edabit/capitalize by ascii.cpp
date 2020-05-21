/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : ascii cap/edabit 
 */

#include<iostream>
using namespace std;
bool cap(char c)
{
	if((char)c>=65&&(char)c<=90) return true;
	return false;
}
bool small(char c)
{
	if((char)c>=97&&(char)c<=122) return true;
	return false;
}
std::string asciiCap(std::string str) {
	for(int i=0;i<str.length();i++)
	{
		if(!((char)str[i]&1))
		{
			if(small(str[i])) str[i]=(char)str[i]-32;
		}
		else if((char)str[i]&1)
		{
			if(cap(str[i])) str[i]=(char)str[i]+32;
		}
	}
	return str;
}
int main()
{
	string s="abCFDGbv";
	cout<<asciiCap(s);
	
}
