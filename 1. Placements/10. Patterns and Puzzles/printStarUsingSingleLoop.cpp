/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : print pattern using single loop
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	int c=0;
	for(int i=1;i<=n;)
	{
		if(c<i)
		{
			cout<<"*";
			c++;
			continue;
		}
		else
		{	
			c=0;
			i++;
			cout<<endl;
		}
		
	}
}
