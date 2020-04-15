#include<iostream>
using namespace std;
int main()
{
	int t,count=1;
	cin>>t;
	while(t!=0)
	{
		int s,m;
		cin>>s;
		m=s;
		int a[3];
		for(int i=0;i<3;i++)
		{
			cin>>a[i];
		}
		
		for(int i=0;i<3;i++)
		{
			s=s-a[i];
			if(s<0)
			{
				count++;
				s=m;
			}
			
			
		}
		cout<<count<<endl;
		t--;
		
		
		
	}
}
