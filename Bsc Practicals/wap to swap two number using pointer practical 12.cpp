#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	int *p1=&a;
	int *p2=&b;
	cout<<"number before swapping:"<<endl;
	cout<<"a:"<<*p1<<endl<<"b:"<<*p2<<endl;
	int *temp;
	temp=p1;
	p1=p2;
	p2=temp;
	cout<<"number after swapping:"<<endl;
	cout<<"a:"<<*p1<<endl<<"b:"<<*p2;
}
