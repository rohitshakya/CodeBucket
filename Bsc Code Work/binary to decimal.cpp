#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,b,r=0,sum=0,count=0;
	cout<<"enter a binary no"<<endl;
	cin>>n;
	while(n>0)
	{
		r=n%10;
		count=count+1;
		sum=sum+r*pow(2,(count-1));
		n=n/10;
	}
	cout<<sum;
}
