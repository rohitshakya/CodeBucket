/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * 
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */
//bit manipulation
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=5;
	//multiply by 3.5;
	x=(x<<1)+x<<(x>>1);
	cout<<"X multiplied by 3.5: "<<x<<endl;
	//flip the right most digit
	x=5;
	x=x&(x-1);
	cout<<"X after flipping the rightmost digit : "<<x<<endl;
	//add 1 to the integer
	x=5;
	x=-(~x);
	cout<<"X after adding one to it : "<<x<<endl;
	//left rotation on a number
	x=5;
	x=x<<1;
	x=-(~x);
	cout<<"X after rotation"<<x<<endl;
	
	
}
