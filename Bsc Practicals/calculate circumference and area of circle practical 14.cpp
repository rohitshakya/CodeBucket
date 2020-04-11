#include<iostream>
using namespace std;
#define pi 3.14;
float peri(int x);
float area(int x);
int main()
{
	float r;
	cout<<"enter the radius of circle"<<endl;
	cin>>r;
	cout<<"cicumference of circle is: "<<peri(r)<<"unit"<<endl;
	cout<<"area of circle is: "<<area(r)<<"unit sq."<<endl;
}
float peri(int x)
{
	float cir=2*x*pi;
	return cir;
}
float area(int x)
{
	float are=x*x*pi;
	return are;
}

