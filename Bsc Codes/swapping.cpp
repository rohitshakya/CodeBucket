#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"enter two no "<<endl;
	cin>>a>>b;
	cout<<"before swapping  :"<<a<<"\t"<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping   :"<<a<<"\t"<<b;
	
}
