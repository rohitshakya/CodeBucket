#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int st[m];
		for(int i=0;i<m;i++)
		{
			cin>>st[i];
		}
		int amt[n];
		int temp[n];
		
		for(int i=0;i<n;i++)
		{
			amt[i]=i;
			temp[i]=amt[i];
			amt[i]=abs(amt[i]-st[0]);
		}
		for(int j=0;j<m;j++)
		{
			for(int i=0;i<n;i++)
		{
			int t=abs(temp[i]-st[j]);
		
			if(t<amt[i])
			{
				amt[i]=t;
			}
		}
		
		}
		
		
		int max=amt[0];
		for(int i=0;i<n;i++)
		{
			if(max<amt[i])
			{
				max=amt[i];
			}
			
		}
		cout<<max;
	
}
