#include<iostream>
using namespace std;
class rohit
{
	public:
	rohit operator++(int)
	{
		cout<<"rohit"<<endl;
	}
}r;
int main()
{
	r++;
}
