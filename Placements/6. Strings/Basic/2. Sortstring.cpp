/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(nlogn)
 * Title :  sort string by sort function
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s ="firstString";
	sort(s.begin(),s.end());
	string s2="hi this is rohit shakya";
	sort(s2.begin(),s2.end(),greater<int>());
	cout<<s<<endl<<s2;
}
