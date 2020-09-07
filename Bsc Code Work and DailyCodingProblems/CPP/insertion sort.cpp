#include<iostream>
using namespace std;
int insertionsort(int a[],int n);
int main()
{
	int n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		
	}
	insertionsort(a,n);
	cout<<"array after insertion sort"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		
	}
}
int insertionsort(int a[],int n)
{
	for(int i=1;i<=n;i++)
	{
		int temp;
		
		for(int j=i-1;j>0;j--)
		{
			
			if(a[j-1]>a[j])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
	
}
