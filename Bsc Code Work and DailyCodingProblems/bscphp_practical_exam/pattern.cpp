#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int p=1;
	int q=1;
	int m;
	for(int i=0;i<n;i++)
	{
		for(int j=n;j>i;j--)
		{
			cout<<" ";
		}
		m=p;
		for(int k=0;k<=i;k++)
		{
			
			cout<<p--;
			
		}
		for(int l=1;l<=i;l++)
		{
			cout<<p--;
		}
		p=m+2;
		cout<<endl;
	}
}
