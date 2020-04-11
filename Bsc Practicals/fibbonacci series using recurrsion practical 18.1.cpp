#include<iostream>
using namespace std;
int first=0,second=1,next;
void fn(int x);
int main()
{
	int n;
	cout<<"enter no of terms greater than 2"<<endl;
	cin>>n;
	cout<<"terms of fb series are "<<endl<<first<<"\t"<<second<<"\t";
	fn(n);
}
void fn(int x)
{
	next=first+second;
	cout<<next<<"\t";
	first=second;
	second=next;
	--x;
	if(x>=3)
	{
	fn(x);
	}
}
