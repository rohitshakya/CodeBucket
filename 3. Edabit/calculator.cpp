/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : 
 * Title : 
 */
#include<iostream>
using namespace std;
int main()
{
	char m;
	do{	
	cout<<"enter two number"<<endl;
	double a,b;
	char ch;
	cin>>a>>b;
	cout<<"enter an operator(+,-,*,/)"<<endl;
	cin>>ch;
	cout<<"The calculated result is ";
	switch(ch)
	{
		case '+': cout<<a+b;
		break;
		case '-': cout<<a-b;
		break;
		case '*': cout<<a*b;
		break;
		case '/': cout<<a/b;
		break;
		default: cout<<"enter a valid operator"<<endl;
		break;
	}
	cout<<"\nPress y to continue and n to exit"<<endl;
	cin>>m;
 } while(m=='y');
 }
			
	
	
	
	
	
	
	
	

