#include<iostream>
using namespace std;
int main()
{
	int a[10];
	a[0]=2;
	cout<<a<<endl;//a[0]=*a
	cout<<*a;//it prints address of first element of array bcoz array is a pointer constant
}
