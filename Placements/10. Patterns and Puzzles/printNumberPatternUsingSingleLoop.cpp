#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int var=1;
	for(int i=1;i<=5;)
	{
		if(var<=i)
		{
			cout<<var++;
			continue;
		}
		else
		{
			cout<<endl;
			i++;
			var=1;
		}
	}
}
