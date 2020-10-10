#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int p=1;
	int q=1;
	int m;
	int a=65;
	int b=65;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		m=p;
		cout<<(char)a++;
		for(int j=n;j>i;j--)
		{
			cout<<" ";
		}
		for(int j=n;j>i;j--)
		{
			cout<<" ";
		}
		cout<<(char)b++;
		p=m+2;
		cout<<endl;
	}
}
