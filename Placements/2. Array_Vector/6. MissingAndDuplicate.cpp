/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : 2 Missing number in array
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=10;
	int arr[]={1,2,3,5,5,6,7,8,9,10};
	int x=0,y;
	for(int i=0;i<n;i++)
	{
		x=x^arr[i];
	}
	for(int i=1;i<=n;i++)
	{
		x=x^i;
	}
	int r=x&~(x-1);
	x=0;
	y=0;
    for (int i = 0; i < n; i++) 
    { 
        if (arr[i] & r) 
            x = x ^ arr[i]; /*XOR of first set in arr[] */
        else
            y = y ^ arr[i]; /*XOR of second set in arr[] */
    } 
    for (int i = 1; i <= n; i++) 
    { 
        if (i & r) 
            x = x ^ i; /* XOR of first set in arr[] and 
                         {1, 2, ...n }*/
        else
            y = y ^ i; /* XOR of second set in arr[] and 
                         {1, 2, ...n } */
    } 
  	cout<<"duplicate "<<x<<endl;
  	cout<<"missing "<<y<<endl;
}
