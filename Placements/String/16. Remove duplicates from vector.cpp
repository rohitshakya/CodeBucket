/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : check whether all items are same 
 */
#include<bits/stdc++.h>
using namespace std;
bool testJackpot(std::vector<std::string> v) {
    vector<string>::iterator it; 
    it =unique(v.begin(), v.begin()+4);
	 v.resize(distance(v.begin(), it)); 
		if(v.size()==1) return true;
		else return false;
}
