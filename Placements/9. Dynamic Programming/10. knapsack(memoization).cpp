/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : m*w
 * Title : knapsac problem
 */
#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int dp(int wt[],int val[],int w, int n)
{
	int static t[10][10];
	memset (t,-1,sizeof(t));
	if(t[n][w]!=-1)
	return t[n][w];
	if(n==0||w==0)
	return 0;
	if(wt[n-1]<=w)
	return t[n][w]=max(wt[n-1]+dp(wt,val,w-wt[n-1],n-1),dp(wt,val,w-wt[n-1],n-1));
	else if(wt[n-1]>w) return t[n][w]=dp(wt,val,w,n-1);
}
int main()
{
	int wt[]={2,3,5,7,1};
	int val[]={1,2,3,4,5};
	int n=5;
	int w=10;
	cout<<dp(wt,val,w,n);
}
