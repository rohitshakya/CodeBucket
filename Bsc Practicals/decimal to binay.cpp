#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,r=0,sum=0,count=0;
	cout<<"enter a decimal no"<<endl;
	cin>>n;
	while(n>0)
	{
		r=n%2;
		count=count+1;
		sum=sum+r*pow(10,(count-1));
		n=n/2;
	}
	cout<<sum;
}
