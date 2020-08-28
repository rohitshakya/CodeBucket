/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(m*n)
 * Title : longest common subsequence time efficient
 */
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
	return a>b?a:b;
}
int lcs(char *x,char *y, int m,int n)
{
	int l[m+1][n+1];
	int i,j;
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			l[i][j]=0;
			else if(x[i-1]==y[j-1])
			{
				l[i][j]=l[i-1][j-1]+1;
			}
			else
			l[i][j]=max(l[i-1][j],l[i][j-1]);
		}
	}
	return l[m][n];
}
int main()
{
	char x[]="arohitshakya";
	char y[]="saeemasharma";
	int m=strlen(x);
	int n=strlen(y);
	cout<<"lcs of given string is "<<lcs(x,y,m,n);
}
