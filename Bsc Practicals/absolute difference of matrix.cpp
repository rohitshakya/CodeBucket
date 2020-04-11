#include<iostream>
using namespace std;
int main()
{
	int m[10][10],i,j,n,suma=0,sumb=0;
	
	cout<<"Enter the order of square matrix"<<endl;
	cin>>n;
	int k=n;
	cout<<"Enter the element of matrix\n";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>m[i][j];
				if(i==j)
			{
				suma=suma+m[i][j];
			}
			if(j==k)
			{
				sumb=sumb+m[i][j];
			}
			
			
		}
		k--;
	}
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<m[i][j];
			
		}
		cout<<endl;
	}
	cout<<"sum of diagonal 1 is: "<<suma<<endl;
	cout<<"sum of diagonal 2 is: "<<sumb<<endl;
	cout<<"absolute difference of diagonal is: "<<suma-sumb<<endl;
	
	
}
