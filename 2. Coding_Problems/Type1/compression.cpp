#include<bits/stdc++.h>
using namespace std;
int main()
{
	string num="11112222322222123456799999";
	char previous=num[0];
	int counter=1;
	int i;
	for(i=1;i<num.length();i++)
	{
		if(num[i]==previous)
		{
			++counter;
		}
		else
		{
			previous=num[i];
			cout<<num[i-1]<<counter;
			counter=1;
		}
	}
	cout<<num[i-1]<<counter;
}
