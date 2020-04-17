/*
 * Author : Rohit Shakya
 * Date   : April-2020
 *
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//how to turn off the particular bit in a number
	int x=100;
	int pos=3;
	int mask;
	pos=pos-1;
	mask=1<<pos;
	x=x^mask;
	cout<<"X after turned off the position bit "<<x<<endl;
}

