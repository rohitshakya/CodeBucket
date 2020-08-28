/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title : knapsac problem
 */
 //base condition of recursive solu will be the initialzation of top down approach
#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int dp(int wt[],int val[],int w, int n)
{
	int i,j;
	int dp[n+1][w+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			if(i==0||j==0)
			{
				dp[i][j]=0;
			}
			else if(wt[i-1]<=j)
			{
				dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
			}
			else if(wt[i-1]>j)
			dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][w];
}
int main()
{
	int wt[]={2,3,5,7,1};
	int val[]={1,2,3,4,5};
	int n=5;
	int w=10;
	cout<<dp(wt,val,w,n);
}
