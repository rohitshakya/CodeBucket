#include<iostream>
using namespace std;
float add(float x,float y);
int add(int x,int y);
int add(int x,int y,int z);

int main()
{
	
	int z=add(4,5);
	int k=add(1,2,3);
	float y=add(5.2,7.2);
	
	cout<<y<<endl<<k<<endl<<z<<endl;
}
int add(int x,int y)
{
	int add=x+y;
	return add;
}
int add(int x,int y,int z)
{
	int add=x+y+z;
	return add;
}
float add(float x,float y)
{
	float add=x+y;
	return add;
}
//function float is not working properly it gives int as return;
//does not work with two float values like add(5.6,7.8);
