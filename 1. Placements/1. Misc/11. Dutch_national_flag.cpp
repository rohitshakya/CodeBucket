/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  Dutch National Flag
 */

#include<iostream>
using namespace std;
void dutch(int a[],int n);
int main()
{
	int arr[]={1,1,1,2,2,2,2,3,1,0,0,0,0,0,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	dutch(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
void dutch(int a[],int n)
{
	int i=0;
	int c0=0,c1=0,c2=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		c0++;
		if(a[i]==1)
		c1++;
		if(a[i]==2)
		c2++;
	}
	while(c0>0)
	{
		a[i]=0;
		i++;
		c0--;
	}
	while(c1>0)
	{
		a[i]=1;
		i++;
		c1--;
	}
	while(c2>0)
	{
		a[i]=2;
		i++;
		c2--;
	}
}
