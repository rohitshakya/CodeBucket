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
	int given;
	cout<<"enter given number"<<endl;
	cin>>given;
	int init=0, sum=0;
	int flag=0;
	for(int i=init;i<7;i++)
	{
		if(sum==given)
		{
			cout<<"found at "<<init<<" and "<<i;
			flag=1;
			break;	
		} 
		if(sum>given)
		{
			sum=sum-arr[init];
			init++;
			i=init;
		}
		else sum+=arr[i];
	}
	if(!flag) cout<<"Not Found\n";
}
