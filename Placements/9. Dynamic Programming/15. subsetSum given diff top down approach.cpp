/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n*sum)
 * Title : subsetSum given diff top down approach
 */
#include<bits/stdc++.h>
using namespace std;
int fun2(int arr[],int n, int sum)
{
	int i,j;
	int dp[n+1][sum+1];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=sum;j++)
		{
			if(j==0)
			dp[i][j]=1;
			if(i==0)
			dp[i][j]=0;
			if(arr[i-1]<=j)
			dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
			else if(arr[i-1]>j)
			dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][sum];
}
int fun(int arr[],int n, int diff)
{
	int sum=0;
	for(int i=0;i<n;i++)
	sum+=arr[i];
	sum=(sum+diff)/2;
	return fun2(arr,n,sum);
}
int main()
{
	int arr[]={1,3,5,5,11,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int diff=8;
	cout<<fun(arr,n,diff);
}
