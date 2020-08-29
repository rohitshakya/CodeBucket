/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title :
 */
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
int fun2(int arr[],int n, int sum)
{
	if(sum==0) return 1;
	if(n==0) return 0;
	if(arr[n-1]<=sum)
	return fun2(arr,n-1,sum-arr[n-1])+fun2(arr,n-1,sum);
	else if(arr[n-1]>sum)
	return fun2(arr,n-1,sum);
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
