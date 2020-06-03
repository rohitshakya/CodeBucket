/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : first and last occurrence of char  
 */
using namespace std;
vector<int> charIndex(string word, char c) {
	vector<int> v;
	int flag;
	for(int i=0;i<word.size();i++)
	{
		flag=0;
		if(word[i]==c)
		{
			v.push_back(i);
			flag=1;
			break;
		}
	}
	if(flag==0) v.push_back(-1);
	for(int i=word.size()-1;i>=0;i--)
	{
		flag=0;
		if(word[i]==c)
		{
			flag=1;
			v.push_back(i);
			break;
		}
	}
	if(flag==0) v.push_back(-1);
	return v;
}
