#include<iostream>
using namespace std;
class abc
{
	public:
		abc operator+(abc arya)
		{
         a=a+arya.a;
         b=b+arya.b;
         return *this;
             
		}
		int a=10;
		float b=30.0;
};
int main()
{
	abc ob,ob2;
	ob2.a=50;
	ob2.b=70;
	ob.a=1000;
	ob.b=2000;	
	ob=ob+ob2;
	cout<<ob.a<<endl<<ob.b;
}
