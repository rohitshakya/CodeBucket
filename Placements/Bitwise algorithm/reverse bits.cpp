/*
 * Author : Rohit Shakya
 * Date   : April-2020
 *
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */ 
//print reverse bits of a number 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=2147483648; int m=32; //m=size_of_number_in_bits
	while(m)
	{
		if(n&1)
		cout<<1;
		else
		cout<<0;
		n>>=1;
		m--;
		
	}
	
}
//if you will run while till n, it will return the result in required bits only
