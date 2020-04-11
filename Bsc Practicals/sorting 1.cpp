#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,j;
	cout<<"enter size of array"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			int temp=0;
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
