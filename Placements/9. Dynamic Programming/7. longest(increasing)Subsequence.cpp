/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title :
 */
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
	return a>b?a:b;
}
int lcs(int *x,int m)
{
	int l[m];
	int i;
	for(int i=0;i<=m;i++)
	{
			if(i==0)
			l[i]=1;
			else if(x[i]<=x[i+1])
			{
				l[i+1]=l[i]+1;
			}
			else
			l[i+1]=l[i];
	}
	return l[m]+1;
}
int main()
{
	int x[]= { 10, 22, 9, 33, 34, 50, 41, 60 ,8,76};
	int m=sizeof(x)/sizeof(x[0]);
	cout<<"lcs of given array is "<<lcs(x,m);
}
