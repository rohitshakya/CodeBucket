/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */
//minimum number of platforms
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int a[]={900, 940, 950, 1100, 1500, 1800}; 
    int b[] = {910, 1200, 1120, 1130, 1900, 2000}; 
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,a+n); //O(nlogn)
	sort(b,b+n);
	int plat=1, res=1;
	int i=1,j=0;
	while(i<n&&j<n)
	{
		if(a[i]<b[j])
		{
			plat++; //arrival is less than departure
			i++;
			if(plat>res)
			{
				res=plat;
			}
		}
		else
		{
			plat--; //departure is less arrival
			j++;	
		}
		
	}
	cout<<res;
	
}
