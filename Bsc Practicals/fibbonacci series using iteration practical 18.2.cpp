#include<iostream>
using namespace std;
int main()
{
	int first=0,second=1,next,n;
	cout<<"enter number of terms"<<endl;
	cin>>n;
	cout<<"series is:\t";
	cout<<"0"<<"\t1";
	for(int i=0;i<n-2;i++)
	{
	
	if(n<=1)
	{
	next=i;
	cout<<next;
	}
	else
	{
		
		next=first+second;
		first=second;
		second=next;
		cout<<"\t"<<next;
	}
}
	return 0;
}
