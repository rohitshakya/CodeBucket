/*
 * Author : Rohit Shakya
 * Date   : April-2020
 *
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */
 //right shift rotation and left shift rotation  
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=30,pos=2; 
	n=n>>2|n<<30; //right shift rotation
	cout<<n<<endl;
	int m=16,pos=2; 
	m=m<<2|m>>30; //left shift roation
	cout<<m<<endl;
}
