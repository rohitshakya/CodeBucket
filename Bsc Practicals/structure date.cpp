#include<iostream>
using namespace std;
struct date
{
	int dat,month,year;
	date()
	{
	
	cout<<"enter date"<<endl;
	cin>>dat;
	cout<<"enter month "<<endl;
	cin>>month;
	cout<<"enter year"<<endl;
	cin>>year;
	if(dat<=31&&month<=12&&year>=0)
	{
	
	cout<<"Date:- "<<dat<<"-"<<month<<"-"<<year<<endl;
}
else 
cout<<"invalid date"<<endl;
	}
	~date()
	{
		cout<<"structure date"<<endl;
	}
};
int main()
{
	date d1;
	
	
}
