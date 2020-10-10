/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  Reverse and capitalize
 */

std::string reverseCapitalize(std::string str) {
	int n=str.length();
	std::string s="";
	for(int i=n-1;i>=0;i--)
	{
		str[i]=(char)str[i]-32;
		s=s+str[i];
	}
	return s;
	
}
