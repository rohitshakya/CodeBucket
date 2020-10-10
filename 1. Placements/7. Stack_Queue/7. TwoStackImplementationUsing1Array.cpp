/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title : two stack implementation
 */
#include<bits/stdc++.h>
using namespace std;
struct twoStack{
	private:
	int *arr;
	int size;
	int top1,top2;
	public:
	twoStack(int n)
	{
		arr=new int[n];
		size=n;
		top1=-1;
		top2=n;
	}
	void push1(int x)
	{
		if(top1<top2-1)
		{
			arr[top1]=x;
			top1++;
			cout<<x<<" is pushed into stack 1"<<endl;
		}
		else
		{
			cout<<"stack overflow in stack 1"<<endl;
		}
		
	}
	void push2(int x)
	{
		if(top1<top2-1)
		{
			arr[top2]=x;
			top2--;
			cout<<x<<" is pushed into stack 2"<<endl;
		}
		else
		{
			cout<<"stack overflow in stack 2"<<endl;
		}
	}
	int pop1(int x)
	{
		if(top1>=0)
		{
			int x=arr[top1];
			top1--;
			return x;
		}
	}
	int pop2(int x)
	{
		if(top2<size)
		{
			int x=arr[top2];
			top2++;
			return x;
		}
		
	}
};
int main()
{
	twoStack *t=new twoStack(5);
	t->push1(3);
	t->push1(2);
	t->push2(1);
	t->push2(6);
	t->push2(3);
}
