/*
 * Author : Rohit Shakya
 * Date   : April-2020
 *
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */

/* Missing number
	1 5 4 6 7 3
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=7;
	int a[]={1,5,4,6,7,3};
	int sum=(n*(n+1))/2;
	cout<<sum;
	
	for(int i=0;i<n-1;i++)
	{
		sum=sum-a[i];
		
	}
	cout<<"missing number is "<<sum;
	
}
