/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  fraction
 */
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
bool greaterThanOne(std::string frac) {
	if(frac.length()==1) return false;
	string frac1="";
	string frac2="";
	int m;
	for(int i=0;i<frac.length();i++)
	{
		if(frac[i]=='/')
		{
			m=i;
			break;
		}	
		frac1+=frac[i];
	}
	for(int i=m+1;i<frac.length();i++)
	{
		frac2+=frac[i];
	}
	std::stringstream ss;
	ss<<frac1;
	int a;
	ss>>a;
	std::stringstream sb;
	sb<<frac2;
	int b;
	sb>>b;
	if(a>b) return true;
	return false;
	
}
