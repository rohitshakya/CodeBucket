#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"enter an integer\n";
	int a;
	cin>>a;
	for(int i=0;i<7;i++)
	a=-(~a);
	cout<<a;
}
