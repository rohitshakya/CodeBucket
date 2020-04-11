#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cout<<"enter rows";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-1;k++)
		{
			cout<<" ";
			
		}
		for(j=1;j<=2*i-1;j++)
		{
			cout<<"*";
			
		}
		cout<<"\n";
	}
	
}
