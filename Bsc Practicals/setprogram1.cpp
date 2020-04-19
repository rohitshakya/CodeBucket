#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int, greater<int>> a;
	a={2,3,4,5,6,4,5,6};
	set<int, greater<int>>:: iterator it;
	for(it=a.begin(); it!=a.end(); it++)
	{
		cout<<*it<<" ";
	}
}
