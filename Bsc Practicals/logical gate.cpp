#include<iostream>
using namespace std;
void rohand();
void rohor();
void rohnot();
int main()
{
	int a;
	cout<<"user choose a logical gate"<<endl;
	cout<<"1.AND gate"<<endl;
	cout<<"2.OR gate"<<endl;
	cout<<"3.NOT gate"<<endl;
	cin>>a;
	switch(a)
	{
		case 1:rohand();
		break;
		case 2:rohor();
		break;
		case 3:rohnot();
		break;
		default:cout<<"choose valid value"<<endl;
		break;
		
	}
	
	return 0;
	
}
void rohand()
{
	int a,b,c;
	cout<<"you chose AND gate"<<endl;
	cout<<"enter two inputs(0/1)"<<endl;
	cin>>a>>b;
	if(a<=1&&b<=1)
	{
		
	c=a*b;
	cout<<"result is "<<c;
	}
	else
	cout<<"please enter 0 or 1";
}
void rohor()
{
	int a,b,c;
	cout<<"you chose OR gate"<<endl;
	cout<<"enter two inputs(0/1)"<<endl;
	cin>>a>>b;
	if(a<=1&&b<=1)
	{
		if(a==1&&b==1)
		cout<<"result is 1";
		else
		{
		
		
	c=a+b;
	cout<<"result is "<<c;}
	}
	else
	cout<<"please enter 0 or 1";
} 
void rohnot()
{
	int a,b,c;
	cout<<"you chose NOT gate"<<endl;
	cout<<"enter a inputs(0/1)"<<endl;
	cin>>a;
	if(a==0)
	{
		
	c=1;
	cout<<"result is"<<c;
	}
	else if(a==1)
	{
	c=0;
	cout<<"result is "<<c;
	}
	else
	cout<<"please enter 0 or 1";
} 

