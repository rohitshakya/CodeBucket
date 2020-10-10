#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	sort(a,a+n);
	int count=0,tc=0;;
	int temp=a[0];
	for(int i=0;i<n;i++)
	{
		if(abs(temp-a[i])<=1)
		{
			tc++;
		}
		else
		{
			temp=a[i];
			tc=1;
			
		}
		if(tc>count)
			{
				count=tc;
			}
		
	}
	cout<<count<<endl;
}
