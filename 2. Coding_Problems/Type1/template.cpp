#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
template <class TYPE>
TYPE max(TYPE x, TYPE y)

{
	return(x.y)?x:y;
}
int main()
{
	int i1=6;
	int i2=5;
	cout<<"given"<<i1<<endl;
	cout<<"and"<<i2<<endl;
	cout<<"is larger"<<endl;
}
