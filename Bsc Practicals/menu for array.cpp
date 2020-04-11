#include<iostream>
#include<iomanip>
using namespace std;
int a[20];
void accept(int n);
void ev(int n);
void od(int n);
void sum(int n);
int main()
{
	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;
	accept(n);
	
}
void accept(int n)
{
	int i,c;
	cout<<"enter elements of array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"user choose a function "<<endl;
	cout<<"1.Even no"<<endl;
	cout<<"2.Odd no"<<endl;
	cout<<"3.sum and average"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:ev(n);
		break;
		case 2:od(n);
		break;
		case 3:sum(n);
		break;
		default:cout<<"choose valid value"<<endl;
		break;
		
	}
	}
	void ev(int n)
	{
		cout<<"even no are"<<endl;
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==0)
			cout<<a[i]<<"\t";
		}
	}
	void od(int n)
	{
	cout<<"odd no are"<<endl;
		for(int i=0;i<n;i++)
		{
			if(a[i]%2!=0)
			cout<<a[i]<<"\t";
		}	
	}
	void sum(int n)
	{
		float sum=0;
		for(int i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		float av=sum/n;
		cout<<"sum of element of array is "<<sum<<endl;
		cout<<"average of element of array is "<<av;
		
	}
