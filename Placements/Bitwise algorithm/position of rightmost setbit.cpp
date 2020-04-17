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
	//position of rightmost set bit;
	int x=100;
	int position=1;
	while(!(x&1))
	{
		position++;
		x=x>>1;
	}
	cout<<"Position of right most set bit "<<position<<endl;
}

