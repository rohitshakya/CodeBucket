/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title : count the number of digits after the decimal points 
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	float x;
	cout<<"Enter a float : ";
	cin>>x;
	stringstream ss;
	ss << abs(x-(int)x);
	string s;
	ss >> s;
	int s1=s.length()-2;
	cout<<"Numbers after decimal point = "<<s1;
	return 0;
}
