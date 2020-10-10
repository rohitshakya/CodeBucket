/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : triple byte: create a data structure which have add function and check method
 */
#include<bits/stdc++.h>
using namespace std;
struct Data{
	int max;
	Data(int x)
	{
		max=x;
	}
	vector<int> arr;
	void add(int x)
	{
		if(arr.size()<max)
		{
		arr.push_back(x);	
		}
			
	}
	bool check(int x)
	{
		for(int i=0;i<arr.size();i++)
		{
			if(x==arr[i])
			return true;
		}
		return false;
	}
	void print()
	{
		for(int i=0;i<arr.size();i++)
		{
			cout<<arr[i]<<" ";
		}	
	}
};
int main()
{
	Data *d1=new Data(5);
	d1->add(5);
	d1->add(3);
	d1->add(1);
	d1->print();
	cout<<"\nstatus: "<<d1->check(3);
}
