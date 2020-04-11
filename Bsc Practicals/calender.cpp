//calender
#include<iostream>
using namespace std;
int main()
{
	cout<<"M	T	W	TH	F	S	S"<<endl;
	for(int i=1;i<=31;i++)
	{
		cout<<i<<"\t";
		if(i%7==0)
		cout<<endl;
	}
}
