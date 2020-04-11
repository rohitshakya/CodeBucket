#include<iostream>
using namespace std;
int main()
{
	float n,i,sum=0;
	cout<<"enter the no of term";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<1/i<<endl;
		sum=sum+1/i;
	}
	cout<<"sum is"<<sum;
}
