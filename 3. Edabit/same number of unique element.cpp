/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  same number of unique element
 */
#include<set>
using namespace std;
bool same(std::vector<int> a1, std::vector<int> a2) {
	set<int> a;
	set<int> b;
	for(int i=0;i<a1.size();i++)
	{
		a.insert(a1[i]);
	}
	for(int i=0;i<a2.size();i++)
	{
		b.insert(a2[i]);
	}
	if(a.size()==b.size()) return true;
	else return false;
}
