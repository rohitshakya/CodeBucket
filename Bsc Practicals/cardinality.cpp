#include<iostream>
using namespace std;
int main()
{
	int arr[100],i=0,count=0;
	cout<<"enter the elements of set"<<endl;
	while(cin>>arr[i])
	{
		count++;
		i++;
	}
	cout<<"cardinality of set is "<<count;
}
