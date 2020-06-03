#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s ="1234567";
	int a=0;
	for(int i=0;i<s.length();i++)
	{
		a=a*10+(char)s[i]-48;
	}
	cout<<a;
}
