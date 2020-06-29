#include<iostream>
using namespace std;
int bubblesort(int a[],int n);
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
	bubblesort(a,n);
	cout<<"array after bubble sort"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		
	}
}
int bubblesort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			int temp;
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
}
