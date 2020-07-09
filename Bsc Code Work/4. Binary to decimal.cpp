#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r=0,sum=0,count=0;
	cout<<"enter a binary no\n";
	cin>>n;
	while(n>0)
	{
		r=n%10;
		sum+=r*pow(2,(count++));
		n/=10;
	}
	cout<<sum;
}
