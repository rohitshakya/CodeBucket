/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  alphabet to numbers
 */

class Solution {
public:
    string freqAlphabets(string s) {  
	string s1="";
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='a'&&s[i]<='i') s1=s1+(char)((int)s[i]-48);
		if(s[i]>='j'&&s[i]<='t') s1=s1+"1"+(char)((int)s[i]-58)+"#";
		if(s[i]>='u'&&s[i]<='z') s1=s1+"2"+(char)((int)s[i]-68)+"#";
	}
    return s1;   
    }
};
