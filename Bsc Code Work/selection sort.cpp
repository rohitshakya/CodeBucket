#include<iostream>
using namespace std;
int selectionsort(int a[],int n);
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
	selectionsort(a,n);
	cout<<"array after selection sort"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		
	}
}
int selectionsort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int temp;
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	
}
