#include<iostream>
using namespace std;
int lsearch(int a[],int n,int x);
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
	int x;
	cout<<"\nenter the element to be searched"<<endl;
	cin>>x;
	lsearch(a,n,x);
	
	
}
int lsearch(int a[],int n,int x)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			c=1;
		cout<<"it is at position :"<<i+1;
		
		}
		
	
}
		if(c==0)
		cout<<"not found"<<endl;
	}
