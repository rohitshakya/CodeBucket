                                 //sum and product of digits of an integers
#include<iostream>
using namespace std;
int main()
{
	int n,r,sum=0,product=1;
	cout<<"enter and integer"<<endl;
	cin>>n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		product=product*r;
		n=n/10;
	 
	}
	cout<<"Sum of digits is:"<<sum<<endl<<"Product of digits is:"<<product;
	
}
