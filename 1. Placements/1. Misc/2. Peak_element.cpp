/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 * Find the peak elements in the array */

/*If input array is sorted in strictly increasing order, the last element is always a peak element. 
For example, 50 is peak element in {10, 20, 30, 40, 50}.
If the input array is sorted in strictly decreasing order, the first element is always a peak element.
100 is the peak element in {100, 80, 60, 50, 20}.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a;
	int n;
	cout<<"enter the size of vector\n";
	cin>>n;
	cout<<"enter the elements of the vector\n";
	for(int i=0;i<n;i++)
	{  
		int input;
		cin>>input;
		a.push_back(input);
	}
	for(int i=0;i<n;i++) 
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nPeak elements are\n";
	for(int i=1;i<n-1;i++)
	{
		if(a[i]>a[i-1]&&a[i]>a[i+1])
		{
			cout<<a[i]<<" ";
		}
	}
}
