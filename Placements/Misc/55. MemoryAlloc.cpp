/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Title : Dynamic Memory Allocations
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//declare a simple integer
	int a=10;
	cout<<a;
	//declare a int pointer p to a memory location of size integer
	int *p=new int;
	*p=5;
	cout<<*p;
	//declare a char pointer c to a memory location of size char
	char *c=new char;
	*c='e';
	cout<<*c;
	//declare a char pointer p to a char array
	char *cA=new char[10];
	*cA='e';
	*(cA+5)='d';
	cout<<*cA;
	cout<<*(cA+5);
}
