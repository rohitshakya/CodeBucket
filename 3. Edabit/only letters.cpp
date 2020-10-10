/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : letters only/edabit 
 */

std::string lettersOnly(std::string str) {
	std::string s="";
	for(int i=0;i<str.length();i++)
	{
		if(((char)str[i]>=65&&(char)str[i]<=90)||((char)str[i]>=97&&(char)str[i]<=122))
		{
			s=s+str[i];
		}
	}
	return s;
}
