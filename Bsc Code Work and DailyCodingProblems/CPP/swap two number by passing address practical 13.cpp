#include<iostream>
using namespace std;
int swap(int& x,int& y);
int main()
{
	int a,b;
	cout<<"enter two number"<<endl;
	cin>>a>>b;
	cout<<"number before swapping:"<<endl;
	cout<<"a:"<<a<<endl<<"b:"<<b;
	swap(a,b);
	cout<<"number after swapping:"<<endl;
	cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
	
}
int swap(int& x,int& y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
}
///the value of a and b change in main in call by reference method
//but in case of call by value a and b does not change in main
