/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title :  Default mood
 */

#include<bits/stdc++.h>
using namespace std;

std::string moodToday(std::string mood="neutral") {
	return "Today, I am feeling " + mood;
}
int main()
{
	string s1="happy";
	cout<<moodToday(s1)<<endl;
	
	string s2="sad";
	cout<<moodToday(s2)<<endl;
	cout<<moodToday();
	
	
}

