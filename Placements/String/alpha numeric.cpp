/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  alpha numeric
 */
 /* 456rohit */
 
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
	vector<string> v;
	v.push_back(s1);
	v.push_back(s2);
	return v;
}
