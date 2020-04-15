/*
 * Author : Rohit Shakya
 * Date   : April-2020
 *
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */
 // Find the single element in the array
 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={3,4,5,6,2,3,4,5,6};
	int v=0;
	for(int i=0;i<9;i++)
	{
		v=v^a[i];
	}
	cout<<v;
}
