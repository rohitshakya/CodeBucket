/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 * title : how to turn off particular bit
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//how to turn off the particular bit in a number, create a mask for the particular position then xor it with the number
	int x=100;
	int pos=3;
	int mask;
	mask=1<<(pos-1);
	x^=mask;
	cout<<"X after turned off the position bit "<<x<<endl;
}

