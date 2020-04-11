#include<iostream>
#include<stdlib.h>
using namespace std;
int a[20];
void accept(int n);
void ev(int n);
void od(int n);
void sum(int n);
void duplicate(int n);
void maxi(int n);
void mini(int n);
void reverse(int n);
void sort(int n);
int main()
{
	int n;
	cout<<"enter size of elements of array"<<endl;
	cin>>n;
	accept(n);
}
void accept(int n)
{
	int i;
	int c;
	cout<<"\nenter elements of array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"user choose a function "<<endl;
	cout<<"1.Even no"<<endl;
	cout<<"2.Odd no"<<endl;
	cout<<"3.sum and average "<<endl;
	cout<<"4.Duplicate"<<endl;
	cout<<"5.Maximum"<<endl;
	cout<<"6.Minimum"<<endl;
	cout<<"7.Reverse"<<endl;
	cout<<"8.Sort"<<endl;
	cout<<"9.Exit"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:ev(n);
		break;
		case 2:od(n);
		break;
		case 3:sum(n);
		break;
		case 4:duplicate(n);
		break;
		case 5:maxi(n);
		break;
		case 6:mini(n);
		break;
		case 7:reverse(n);
		case 8:sort(n);
		break;
	    default:system("exit");
		break;
		
	}
	}

void ev(int n)
{
	
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		cout<<a[i]<<"\t";
		}
		accept(n);
}
	void od(int n)
	{
	cout<<"odd no in array are::\t";
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		cout<<a[i]<<"\t";
	}
	
	accept(n);
	}
	void sum(int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	float av=sum/n;
	cout<<"sum is "<<sum<<"average is "<<av;
	accept(n);
}
void duplicate(int n)
{
	cout<<"duplicates are:\t";
	for(int i=0;i<n;i++)
	{ 
	for(int j=i+1;j<n;j++)
{
			if(a[i]==a[j])
		{
			cout<<a[i]<<endl;
		a[j]=0;
		}
		}
		}
		accept(n);
		}

void maxi(int n)
{
	int maxi=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=maxi)
		maxi=a[i];
	}
	cout<<"maximum no is"<<maxi;
	accept(n);
}

void mini(int n)
{
	int mini=1000;
	for(int i=0;i<n;i++)
	{
		if(a[i]<=mini)
		mini=a[i];
	}
	cout<<"minimum no is "<<mini;
accept(n);
}
void reverse(int n)
{
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i]<<endl;
	}
}
void sort(int n)
{
	int i,j,temp=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
