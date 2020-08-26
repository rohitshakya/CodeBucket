/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : subarray sum to a given sum
 * Note: valid for non-negative numbers, for negative number use hashing
 */
#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,5,7,12,56,34};
	int n=sizeof(arr)/sizeof(arr[0]);
	int givenSum;
	cout<<"enter given number"<<endl;
	cin>>givenSum;
	int init=0;
	int currSum=0;
	int flag=0;
	for(int i=init;i<n;i++)
	{
		if(currSum==givenSum)
		{
			cout<<"found at "<<init+1<<" and "<<i;//indexing 1;
			flag=1;
			break;
		}
		else if(currSum>givenSum)
		{
			currSum-=arr[init];
			init++;
			--i;
		}
		else
		currSum+=arr[i];
	}
	if(!flag) cout<<"Not found"<<endl;
	}
