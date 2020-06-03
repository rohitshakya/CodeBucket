/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  Isogram
 */

#include<set>
using namespace std;
bool isIsogram(std::string s) {
	set<char> s1;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]<=97){s[i]=(char)s[i]+32;}
		s1.insert(s[i]);	
	}
	if(s1.size()==s.length()) return true;
	else return false;
}
