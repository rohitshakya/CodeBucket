#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout<<"enter no term for series"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		sum=sum-i;
		else
		sum=sum+i;
		
	}
	cout<<"sum of series is  "<<sum<<endl;
	
}
