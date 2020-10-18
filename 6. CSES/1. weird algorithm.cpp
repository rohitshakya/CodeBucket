/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Title :  weird algorithm
 */
#include<iostream>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	cout<<"\n";
	while(n!=1)
	{
		cout<<n<<" ";
		if(n&1) n=3*n+1;
		else n>>=1;
	}
	cout<<n<<"\n";
}
