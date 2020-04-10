#include<iostream>
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
		int temp=a[0],count=0,tc=0;;
		for(int i=0;i<n;i++)
		{
			if(a[i]==temp)
			{
				tc++;
				if(count<tc)
				{
					count=tc;
				}
			}
			else
			{
				
				temp=a[i];
				tc=1;
				
			}
		}
	
		cout<<n-count<<endl;
	}
