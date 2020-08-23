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
	cout<<a<<endl;
	//declare a int pointer p to a memory location of size integer
	int *p=new int;
	*p=5;
	cout<<*p<<endl;
	//declare a char pointer c to a memory location of size char
	char *c=new char;
	*c='e';
	cout<<*c<<endl;
	//declare a char pointer p to a char array
	char *cA=new char[10];
	*cA='e';
	*(cA+5)='d';
	cout<<*cA<<endl;
	cout<<*(cA+5)<<endl;
	int *p1=(int*)malloc(sizeof(int));
	*p1=51;
	cout<<p1<<endl;//value of p1 and address of 51 
	cout<<*p1<<endl;
	int *p2;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
			p2=(int*)malloc(sizeof(int));
			*p2=j++;
		}
		cout<<endl;
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<*p2;
		}
		cout<<endl;
	}
}
