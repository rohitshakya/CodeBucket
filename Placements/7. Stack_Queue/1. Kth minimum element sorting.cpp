/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(nlogn)
 * Title : Kth minimum element
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	vector<int> v={2,4,6,7,8,1,9,10};
	sort(v.begin(),v.end());
	cout<<"enter the value of k\n";
	cin>>k;
	cout<<"Kth minimum element in array is "<<v[k-1];
}
