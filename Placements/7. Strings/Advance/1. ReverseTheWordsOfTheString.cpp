/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : reverse words in a string 
 */

#include <bits/stdc++.h> 
using namespace std; 
void reverseWords(string &s)
{
	int start=0, end;
	for(end=0;end<s.length();end++)
	{
		if(s[end]==' ')
		{
			reverse(s.begin()+start,s.begin()+end);
			start=end+1;
		}
	}
	reverse(s.begin()+start,s.end());
	reverse(s.begin(),s.end());
}

int main() 
{ 
	string s = "i like this program very much"; 
	reverseWords(s); 
	cout << s; 
	return 0; 
} 

