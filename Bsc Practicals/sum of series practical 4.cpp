//print sum of first n terms of series:1-2+3-4+5......
#include<iostream>
using namespace std;
int main()
{
	
	int sum=0,n;
	cout<<"Enter number of terms"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int temp=i;
		if(i%2==0)
		{
			temp=-i;
		}
		sum=sum+temp;
		
	}
	cout<<"sum of series upto first "<<n<<" terms is:"<<sum;
	
}
