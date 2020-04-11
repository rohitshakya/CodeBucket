#include<iostream>
using namespace std;
int main()
{
	int n,flag=0;
	cout<<"Enter the upto u find the prime no or check the no is prime or not"<<endl;
	cin>>n;
	for(int i=2;i<n-1;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		
	}
		if(flag==1)
		cout<<n<<" is not a prime no"<<endl;
		else
		cout<<n<<" is a prime no"<<endl;
}
