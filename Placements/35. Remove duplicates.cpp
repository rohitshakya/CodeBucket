#include<set>
#include<vector>
#include<iterator>
#include<iostream>
using namespace std;
std::vector<int> setfun(std::vector<int> arr) {
	set<int> s;
	for(int i=0;i<arr.size();i++)
	{
		s.insert(arr[i]);
	}
	vector<int> v;
	for(auto i=s.begin();i!=s.end();i++)
	{
		v.push_back(*i);
	}
	return v;
}
int main()
{
	vector<int> v1={1,4,5,6,7,7};
	vector<int> v=setfun(v1);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}	
	
}
