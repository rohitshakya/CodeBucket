#include<iostream>
using namespace std;
class love
{
	public:
		int count;
		love()
		{
			cout<<"love constructor  is working smoothly"<<endl;
			
		}
		int operator -()
		{
			cout<<"operator overloading is working"<<endl;
			count=count+1;
		}
}r1;
int main()
{
	int sum;
	-r1;
	-r1;
	-r1;
	cout<<"main is working"<<endl;
	cout<<r1.count<<endl;
}
