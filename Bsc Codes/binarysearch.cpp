#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter sorted array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nenter element to be search"<<endl;
	int x;
	cin>>x;
	int start=0;
	int last=n-1;
	int mid=(start+last)/2;
	int flag=0;
	while(start<=last)
	{
			if(a[mid]==x)
		{
			flag=1;
			cout<<x<<" is found on position "<<mid+1<<endl;
			break;
		}
		if(x<a[mid])
		{
			last=mid-1;
		}
		else if(x>mid)
		{
			start=mid+1;
		}
		mid=(start+last)/2;
		
	}
	
	if(flag==0)
	{
		cout<<"it is not found in sorted array"<<endl;
	}
}
