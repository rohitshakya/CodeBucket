#include<iostream>
using namespace std;
int main()
{
	long int n,x,r=0,rev=0,count=0,sum=0,arm=0;
	cout<<"enter a number "<<endl;
	cin>>n;
	x=n;
	while(n!=0)
	{
		r=n%10;
		count=count+1;
		sum=sum+r;
		arm=arm+(r*r*r);
		rev=(rev*10)+r;
		n=n/10;
	}
	cout<<"number of digits are "<<count<<endl;
	cout<<"sum of digits is "<<sum<<endl;
	cout<<"reverse of "<<x<<" is "<<rev<<endl;
	if(x==rev)
	cout<<"and it is a palindrome"<<endl;
	else
	cout<<"and it is not a palindrome"<<endl;
	if(x==arm)
	cout<<"and it is an armstrong number"<<endl;
	else
	cout<<"it is not an armstrong number"<<endl;
	return 0;	
	
}
