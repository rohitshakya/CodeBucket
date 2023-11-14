/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */
//Minimum possible travel cost among N cities
#include<iostream>
using namespace std;
int main()
{
	int a[]={4, 7, 8, 3, 4 };
	int n=sizeof(a)/sizeof(a[0]);
	int current_cost=a[0];
	int sum=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<current_cost)
		{
			current_cost=a[i];
		}
		sum=sum+current_cost;
	
	}
	cout<<"Total cost"<<sum<<endl;
}
