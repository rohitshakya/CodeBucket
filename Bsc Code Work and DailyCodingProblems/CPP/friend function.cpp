#include<iostream>
using namespace std;
     class nikhat
{
	int a;
	public:
		friend nikhat rohit(nikhat& x);
};
int main()
{
	nikhat n,n1;
	cout<<"friend function"<<endl;
     rohit(n);
	
}
	nikhat rohit( nikhat& x)
	{
		x.a=5;
		cout<<x.a;
	}

