//factor of a given no
#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"enter a no"<<endl;
	cin>>n;
	cout<<"factors of "<<n<<" are::";
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		    cout<<i<<"\t";
			count=count+1;
		}
	}
	cout<<"\nno of factors are::"<<count;
}
