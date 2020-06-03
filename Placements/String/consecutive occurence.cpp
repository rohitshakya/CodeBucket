/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  consecutive occurence
 */
 //aaabbbssdef to absdef
using namespace std;
std::string unstretch(std::string word) {
	string s="";
	s=s+word[0];
	int a=0;
	for(int i=1;i<word.length();i++)
	{
		if(s[a]!=word[i])
		{
			s=s+word[i];
			a++;
		}
	}
	return s;
}
