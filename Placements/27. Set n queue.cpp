//#include<bits/stdc++.h>
#include<iostream>
#include<queue>
#include<unordered_set>
#include<set>
using namespace std;
void setImplement();
void queueImplement();
int main()
{
	setImplement();
	queueImplement();
	
}
void setImplement()
{
	cout<<"Unordered Set"<<endl;
	unordered_set<int> a={2,31,4,5,6,7,5};
	for(auto i=a.begin();i!=a.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Ordered Set"<<endl;
	set<int> a1={2,31,4,5,6,7,5};
	for(auto i=a1.begin();i!=a1.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	
}
void queueImplement()
{
	cout<<"Priority Queue in ascending order"<<endl;
	priority_queue<int,vector<int>,greater<int>> q;
	q.push(6);
	q.push(61);
	q.push(634);
	q.push(6000);
	while(q.empty()==false)
	{
		cout<<q.top()<<" ";
		q.pop();
	}
	cout<<endl;
	cout<<"Priority Queue"<<endl;
	priority_queue<int> q1;
	q1.push(6);
	q1.push(61);
	q1.push(634);
	q1.push(6000);
	while(q1.empty()==false)
	{
		cout<<q1.top()<<" ";
		q1.pop();
	}
	cout<<endl;
}
