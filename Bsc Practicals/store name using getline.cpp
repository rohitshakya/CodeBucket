#include<iostream>
using namespace std;
int main()
{
	char name[40];
	string r;
	cout<<"enter your name using char"<<endl;
	cin.getline(name,40);
	cout<<name;
	cout<<"enter your name using string"<<endl;
	getline(cin,r);
	cout<<r;
	

}
