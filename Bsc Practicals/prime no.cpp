#include<iostream>
using namespace std;
int main()
{
	int n,flag=0,i;
	cout<<"enter a number"<<endl;
	cin>>n;
	for(int j=2;j<=n;j++)
	{
	
	for(i=2;i<j-1;i++)
	{
		if(j%i==0)
	   {
		flag=1;
		
	   }
	else
	cout<<"prime no upto "<<n<<" are:"<<i<<endl;
	}
	if(flag==1)
	cout<<j<<" is not a prime no"<<endl;
	else
	cout<<j<<" is prime no"<<endl;
	return 0;
}
}
