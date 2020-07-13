/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Missing number in array
 */
#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,6,7,9,10,8};
	int n=10;
	int x=0;
	int i;
	for(i=0;i<9;i++)
	{
		x=x^i^arr[i];
	}
	cout<<(x^i^n);
}
