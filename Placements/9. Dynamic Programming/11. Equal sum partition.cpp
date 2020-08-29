/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :O(n*w)
 * Space complexity : O(n*w);
 * Title : Equal sum partition
 */
#include<bits/stdc++.h>
using namespace std;
bool fun(int arr[],int n, int sum)
{
	bool dp[n+1][sum+1];
	int i,j;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=sum;j++)
		{
			if(j==0)
			dp[i][j]==true;
			if(i==0)
			dp[i][j]==false;
			else if(arr[i-1]<=j)
			dp[i][j]=(dp[i-1][j-1])||(dp[i-1][j]);
			else if(arr[i-1]>j)
			dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][sum];
}
bool isEqualSum(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	if(sum&1) return false;
	else
	return fun(arr,n,sum/2);
}
int main()
{
	int arr[]={1,3,5,5,11,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	if(isEqualSum(arr,n))
	cout<<"True"<<endl;
	else cout<<"False"<<endl;
	}
