/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 5.1.0
 * Flags    : -std=c++14
 * Time Complexity: O(nlogn)
 * Title: Given an array A of positive integers, write a program to sort them in such a way that the first part of the array contains odd numbers sorted in descending order and rest of the portion contains even numbers in asceneding order.
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array\n";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of array\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}                                                
	vector<int> odd,even;
	vector<int>:: iterator i;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even.push_back(a[i]);
		}
		else
		{
			odd.push_back(a[i]);
		}
	}										
	cout<<"\n";
	sort(odd.begin(), odd.end(), greater<int>()); 
	sort(even.begin(), even.end());		
	for(i=odd.begin();i!=odd.end();i++)
	{
		cout<<*i<<" ";
	}
	for(i=even.begin();i!=even.end();i++)
	{
		cout<<*i<<" ";
	}
}
