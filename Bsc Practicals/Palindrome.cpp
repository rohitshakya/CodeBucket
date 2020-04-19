/*
 * Author : Rohit Shakya
 * Date   : June-July 2016
 *
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cout<<"enter a string"<<endl;
	cin>>str;
	int flag=0;
	for(int i=0;i<str.length()/2+1;i++)
	{
		if(str[i]!=str[str.length()-i-1])
		flag=1;
	}
	if(flag==1)
	cout<<"Not a Palindrome\n";
	else
	cout<<"It is a Palindrome\n";
}
