/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(logn) //if array is already sorted
 * title : Count_no_of_elements in sorted_array 
 */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int count(const int &x);
int main()
{
	int z;
	cout<<"Enter the element "<<endl;
	cin>>z;
	cout<<"The count of "<<z<<" is "<<count(z);
	
	
}
int count(const int &x)
{
	vector<int> v={2,3,4,4,4,5,6,7,8,11,1,23,1,234};
	sort(v.begin(),v.end());
	vector<int>:: iterator it1,it2;
	it1=lower_bound(v.begin(),v.end(),x);
	it2=upper_bound(v.begin(),v.end(),x);
	if(it1==v.end())
	{
		return 0;
	}
	return abs(it1-it2);
	
}
