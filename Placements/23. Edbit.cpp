/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  edbit
 */
#include<bits/stdc++.h>
using namespace std;
string fun(int l)
{
	string ed="Ed";
	string bit="bit";
	string a="";
	for(int i=0;i<l;i++)
{
	a=a+"a";
}
	return (ed+a+bit);
}
int main()
{
	int l=5;
	string s=fun(5);
	cout<<s;	
}

