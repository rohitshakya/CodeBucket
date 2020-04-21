/*
 * Author : Rohit Shakya
 * Date   : April-2020
 *
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */
/*Given an array A of positive integers, write a program to sort them in such a way that the first part of the array contains
odd numbers sorted in descending order and rest of the portion contains even numbers in asceneding order.
example: 0 4 5 3 7 2 1
Output:  7 5 3 1 0 2 4
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
	}                                                   //O(N)
	vector<int> o,e;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			e.push_back(a[i]);
		}
		else
		{
			o.push_back(a[i]);
		}
	}													//O(N)
	cout<<"\n";
	  sort(o.begin(), o.end(), greater<int>()); //sort in descending order O(nlogn)
	  sort(e.begin(), e.end());					//sort in ascending order O(nlogn)
	for(auto i=o.begin();i!=o.end();i++)
	{
		cout<<*i<<" ";
	}
	for(auto i=e.begin();i!=e.end();i++)
	{
		cout<<*i<<" ";
	}
	
	
}
