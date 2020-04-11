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
		int l=i;
		for(j=1;j<=i;j++)
		{
			
			cout<<l;
			l--;
		}
		k=2;
		for(j=2;j<=i;j++)
		{
	      	cout<<k;
	      	k++;
		}
		cout<<endl;
		
	}
}
