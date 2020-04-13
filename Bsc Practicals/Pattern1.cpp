#include<iostream>
using namespace std;
int main()
{
	int i,n=5;
	
	for(int i=1;i<=n;i++)
	{
		int k=n;
		for(int j=1;j<=i-1;j++)
		{
			cout<<" ";
		}
		for(int j=n;j>=i;j--)
		{
			cout<<k;
			k--;
		}
		cout<<endl;
	}
}
/*
Draw the pattern
54321
 5432
  543
   54
    5
	*/
