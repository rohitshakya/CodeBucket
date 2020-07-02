#include<iostream>
#include<new>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"enter no of array"<<endl;
	cin>>n;
	int *p;
	int *q;
	p=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>*p;
		sum=sum+(*p);
	}
	cout<<"sum of array is:"<<sum;
	delete [] p;
	
	
}
