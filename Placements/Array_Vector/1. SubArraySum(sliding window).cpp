/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Space : O(1)
 * Title : subarray sum to a given sum
 * Note: valid for non-negative numbers, for positive number use hashing
 */
#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,5,7,12,56,34};
	int n=sizeof(arr)/sizeof(arr[0]);
	int given;
	cout<<"enter given number"<<endl;
	cin>>given;
	int init=0;
	int sum=0;
	int flag=0;
	for(int i=init;i<n;i++)
	{
		if(sum==given)
		{
			cout<<"found at "<<init+1<<" and "<<i;//indexing 1;
			flag=1;
			break;
		}
		else if(sum>given)
		{
			sum-=arr[init];
			init++;
			--i;
		}
		else
		sum+=arr[i];
	}
	if(!flag) cout<<"Not found"<<endl;
	}
