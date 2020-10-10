#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	cout<<s;
	int sum=0;
	int flag=0;
	for(int i=0;i<s.length();i++)
	{
		switch(s[i])
		{
			case 'M': 
			if(flag==0||flag==1000)
			{
				sum=sum+1000;
				flag=1000;
			}
			else if(flag==100)
			{
				sum=sum+800;
				flag=501;
			}
			
			break;
			case 'D': 
			if(flag==0||flag==1000)
			{
				sum=sum+500;
				flag=500;
			}
			else if(flag==100)
			{
				sum=sum+300;
				flag=501;
			}
			break;
			case 'C':
				if(flag==0||flag==1000||flag==500||flag==100)
			{
				sum=sum+100;
				flag=100;
			}
			else if(flag==10)
			{
				sum=sum+80;
				flag=101;
			}
			break;
			case 'L':
				if(flag==0||flag==1000||flag==500||flag==100||flag==501)
			{
				sum=sum+50;
				flag=50;
			}
			else if(flag==10)
			{
				sum=sum+30;
				flag=101;
			}
			
			break;
			case 'X': 
			if(flag==0||flag==1000||flag==500||flag==100||flag==50||flag==10||flag==501||flag==10)
			{
				sum=sum+10;
				flag=10;
			}
			else if(flag==1)
			{
				sum=sum+8;
				flag=37;
			}
			
			break;
			case 'V': 
			if(flag==0||flag==1000||flag==500||flag==100||flag==50||flag==10||flag==501||flag==101)
			{
				sum=sum+5;
				flag=1;
			}
			else if(flag==1)
			{
				sum=sum+3;
				flag=37;
			}
			
			
			
			break;
			case 'I': 
			if(flag==0||flag==1000||flag==500||flag==100||flag==50||flag==10||flag==5||flag==1||flag==501||flag==101)
			{
				sum=sum+1;
				flag=1;
			}
			
			break;
			default:sum=sum+0;
			break;
		}
	}
	cout<<sum;
}
