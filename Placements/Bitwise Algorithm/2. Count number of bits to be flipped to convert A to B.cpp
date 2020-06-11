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
	int a=17,b=27; //Count number of bits to be flipped to convert A to B
	int count=0;
	a=a^b;
	while(a)
	{
		count+=(a&1);
		a>>=1;
	}
	cout<<"No of bits will change "<<count<<endl;	
}

