#include<iostream>
using  namespace std;
int mergesort(int a[],int l,int r);
int merge(int a[],int l,int r,int m);
int main()
{
	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the element of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"array before sorting"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	mergesort(a,0,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int mergesort(int a[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,r,m);
		
	}
}
int merge(int a[],int l,int r,int m)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++)
	{
		L[i]=a[l+i];
		
	}
	for(int j=0;j<n2;j++)
	{
		R[j]=a[m+1+j];
		
	}
	i=0;
	j=0;
	k=l;
	while(i<n1&&j<n2)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=R[j];
		j++;
		k++;
	}
}
