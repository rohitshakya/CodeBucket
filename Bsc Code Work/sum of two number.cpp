#include<iostream>
using namespace std;
int add(int x,int y);
int main()
{
	int a,b,c,sum;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	
	cout<<"Sum of two number is"<<add(a,b);
	
}
int add(int x,int y)
{
	return x+y;
}
