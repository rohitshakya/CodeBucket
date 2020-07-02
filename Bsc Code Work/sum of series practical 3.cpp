//print sum of first n terms of series:1+(1/2)+(1/3)+(1/4).......
#include<iostream>
using namespace std;
int main()
{
	
	float sum=0,n;
	cout<<"Enter number of terms"<<endl;
	cin>>n;
	for(float i=1;i<=n;i++)
	{
		sum=sum+1/i;
	}
	cout<<"sum of series upto first "<<n<<" terms is:"<<sum;
	
}
