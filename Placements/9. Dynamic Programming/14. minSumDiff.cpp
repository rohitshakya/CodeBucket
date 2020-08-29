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
int fun(int arr[],int n, int sum, int m)
{
	if(sum<m) m=sum;
	if(n==0) return m;
	m=min(fun(arr,n-1,sum-arr[n-1],m),fun(arr,n-1,sum,m));
}
int main()
{
	int arr[]={1,3,5,5,11,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<fun(arr,n,34,34);
}
