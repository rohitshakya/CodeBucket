/*
 * Author : Rohit Shakya
 * Date   : April-2020
 *
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(nlogn)
 * title :  Lower Bound-STL
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
    	int input;
    	cin>>input;
    	v.push_back(input);
	}
	sort(v.begin(),v.end());
	int q;
	cin>>q;
	vector<int> q1;
	for(int i=0;i<q;i++)
	{
		int input;
		cin>>input;
		q1.push_back(input);
		
	}
	for(auto i=q1.begin();i!=q1.end();i++)
	{
		auto it=lower_bound(v.begin(),v.end(),*i);
		if(it==v.end())
		{
			cout<<"No "<<endl;
		}
		else if(*it==*i)
		cout<<"Yes "<<(it-v.begin())+1<<endl;
		else
		cout<<"No "<<(it-v.begin())+1<<endl;
	}
    return 0;
}

