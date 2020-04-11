#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,n=20,j;
	for(i=1;i<=n-10;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n-10)
			cout<<"#";
			else if (j==1||j==n)
			cout<<"#";
			else
			cout<<" ";
		}
		cout<<endl;
	}
}

