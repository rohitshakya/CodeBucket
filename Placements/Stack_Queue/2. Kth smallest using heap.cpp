/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(nlogn)
 * Title : Kth minimum element using min heap or priority queue
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cout<<"enter k\n";
	cin>>k;
	vector<int> v={2,4,6,7,8,1,9,10};
	priority_queue<int, vector<int>, greater<int>> q;
	for(int i=0;i<v.size();i++)
	{
		q.push(v[i]);
	}
	for(int i=0;i<k-1;i++) q.pop();
	cout<<q.top();
}
