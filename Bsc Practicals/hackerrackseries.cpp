#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,n,i;
	cout<<"enter a,b,n"<<endl;
	cin>>a>>b>>n;
	int sum=a;
	for(i=0;i<n;i++)
	{
		sum=sum+pow(2,i)*b;
		cout<<sum<<" ";
	}
}
