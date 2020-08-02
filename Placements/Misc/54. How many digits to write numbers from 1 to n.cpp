/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(logn)
 * Title : how many digits to write numbers from 1 to N
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number n\n";
	cin>>n;
	int m=n;
	int count=0;
	while(n)
	{
		count++;
		n/=10;
	}
	int sum=0;
	int leftDigits=0;
	int i=0;
	for(i=0;i<count-1;i++)
	{
		sum+=(i+1)*9*pow(10,i);
		leftDigits+=9*pow(10,i);
	}
	sum+=(m-leftDigits)*count;
	cout<<"Total number of digits to make numbers from 1 to "<<m<<" : "<<sum;
}
