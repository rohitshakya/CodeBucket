/*
 * Author : Rohit Shakya
 * Date   : April-2020
 *
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 * time complexity : O(logn)
 * title : Set STL hacker Rank
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	set<int> s;
	set<int> ::iterator it2;
	for(int i=0;i<n;i++) //O(n) //time complexity of this loop is not included in overall time complexity
	{
		int x,y;
		cin>>x>>y;
		switch(x)
		{
			case 1: s.insert(y); //to insert and search in a set
			
			break;
			case 2: s.erase(y);
			break;
			case 3:
			{
				set<int>::iterator it=s.find(y);
				if(it==s.end())
				cout<<"No"<<endl;
				else
				cout<<"Yes"<<endl;
				//cout<<distance(s.begin(),it)+1<<endl;// distance function is used to get iterator index
				
			} 			
			break;
		}
	}
}

