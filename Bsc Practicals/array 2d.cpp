#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],sum[3][3],i,j,k,l;
	cout<<"enter 1st matrix"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"enter 2nd matrix"<<endl;
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
			cin>>a[k][l];
		}
	}
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
			cout<<b[k][l]<<" ";
		}
		cout<<endl;
	}

	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
			sum[k][l]=(a[k][l]+b[k][l]);
		}
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<sum[i][j]<<"  ";
		}
		cout<<endl;
	}
	}

