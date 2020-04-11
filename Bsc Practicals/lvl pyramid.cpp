#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n,o;
	cout<<"enter no of rows"<<endl;
	cin>>n;
	o=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		for(j=1;j<=2*o-1;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		o--;
		cout<<endl;
	}
	for(i=1;i<=2*n+1;i++)
	{
		cout<<"*";
	}

}
