/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : find number of vowels using recursion 
 */
#include<bits/stdc++.h>
using namespace std;
int test(string s)
{
	if(s.length()==0) return 0;
	else if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u') return 1+test(s.substr(1));
	else return test(s.substr(1));
}
int main()
{
	string s="rohiiiiiiitshakyaisagoodboy";
	cout<<test(s);
}
