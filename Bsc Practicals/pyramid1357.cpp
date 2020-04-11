#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cout<<"enter no of rows"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=2*i-1;k++)
		{
			cout<<"*";
		}
		cout<<endl;		
	}
}
