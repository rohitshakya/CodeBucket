/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(nlogn)
 * Title : first index of 1
 */
#include<bits/stdc++.h>
using namespace std; 
int search(int arr[],int l, int r)
{
	while(l<=r)
	{
		int mid=l+(r-l)/2;
		if(arr[mid]==1&&(mid==0||arr[mid-1]==0))
		return mid;
		else if(arr[mid]==1)
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
}
int main() 
{ 
	int arr[]={0,0,0,0,0,1,1,1,1,1,1,1,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<search(arr,0,n-1); 
    return 0; 
} 
