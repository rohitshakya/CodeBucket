#include<iostream>
using namespace std;
int binary(int a[],int n,int x,int l,int u);
int main()
{
	int arr[10],n,x,u,l=0,c;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter the elements of array in sorted form"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element to be searched"<<endl;
	cin>>x;
	u=n-1;
	c=binary(arr,n,x,l,u);
	if(c==0)
	{
		cout<<"number not found"<<endl;
		
	}
	else
	cout<<"number found"<<endl;
}
int binary(int a[],int n,int x,int l,int u){
	int mid,c=0;
	if(l<=u)
	{
		mid=(l+u)/2;
		if(x=a[mid])
		{
			c=1;
			
		}
		if(x<a[mid])
		{
			return binary(a,n,x,l,mid-1);
			
		}
		
		if(x>a[mid])
		{
			return binary(a,n,x,mid+1,u);
			
		}
		
	}
}

