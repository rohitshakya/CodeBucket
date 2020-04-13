#include<iostream>
using namespace std;
int main()
{
	int i,j,n,suma=0,sumb=0; 
	cout<<"Enter the order of Square matrix"<<endl;
	cin>>n;
	int m[n][n];
	int k=n;
	cout<<"Enter the elements of the matrix\n";
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
	cout<<"Sum of diagonal 1 is: "<<suma<<endl;
	cout<<"Sum of diagonal 2 is: "<<sumb<<endl;
	cout<<"Absolute difference of diagonal is: "<<abs(suma-sumb)<<endl;
	
	
}
