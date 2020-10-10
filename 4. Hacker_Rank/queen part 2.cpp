#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,r,c;
	cout<<"enter n"<<endl;
	cin>>n;
	cout<<"enter obs"<<endl;
	cin>>k;
	cout<<"enter queen's position"<<endl;
	cin>>r>>c;
	int a[n][n];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j]=0;
		}
	}
	r=r-1;
	c=c-1;

	for(int i=0;i<n;i++)
	{
		a[i][c]=1;
		a[r][i]=1;
	}

	int r1=r;
	int c1=c;
	for(int i=0;i<n;i++)
	{
		if(r1>=0&&c1>=0)
		{
			a[r1][c1]=1;
			r1--;
			c1--;
		}
		
	}
	
	r1=r;
	c1=c;
	for(int i=0;i<n;i++)
	{
		if(r1>=0&&c1<n)
		{
			a[r1][c1]=1;
			r1--;
			c1++;
		}
		
	}
	r1=r;
	c1=c;
	for(int i=0;i<n;i++)
	{
		if(r1<n&&c1>=0)
		{
			a[r1][c1]=1;
			r1++;
			c1--;
		}
		
	}
	r1=r;
	c1=c;
	for(int i=0;i<n;i++)
	{
		if(r1<n&&c1<n)
		{
			a[r1][c1]=1;
			r1++;
			c1++;
		}
		
	}
	cout<<"enter obs"<<endl;
	
	int ro[k],co[k];
	for(int i=0;i<k;i++)
	{
		cin>>ro[i]>>co[i];
	}
	for(int i=0;i<k;i++)
	{
		a[ro[i]-1][co[i]-1]=5;
	}
	
		cout<<endl;
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<"    ";
		}
		cout<<endl;
	}
	int count=0;
	for(int i=r;i>=0;i--)
	{
		if(a[i][c]==1)
		{
			count++;
		}
		else
		break;
	}
	for(int i=r;i<n;i++)
	{
		if(a[i][c]==1)
		{
			count++;
		}
		else
		break;
	}
	for(int i=c;i>=0;i--)
	{
		if(a[r][i]==1)
		{
			count++;
		}
		else
		break;
	}
	for(int i=c;i<n;i++)
	{
		if(a[r][i]==1)
		{
			count++;
		}
		else
		break;
	}
	
	cout<<"count"<<count;
	
	
	
	
}
