#include<bits/stdc++.h>
using namespace std;
int menu();
void evenNum(vector<int> a);
int main()
{
	vector<int> v;
	cout<<"Enter the element of vector\n";
	int input;
	while(cin>>input)
	{
		v.push_back(input);
	}
	int m=menu();
	cout<<m;
	
	
}
int menu()
{
	cout<<"Choose a function\n";
	cout<<"1.Even no. in the vector\n";
	cout<<"2.Odd no. in the vector\n";
	cout<<"3.Sum and Average "<<endl;
	cout<<"4.Duplicate"<<endl;
	cout<<"5.Maximum"<<endl;
	cout<<"6.Minimum"<<endl;
	cout<<"7.Reverse"<<endl;
	cout<<"8.Sort"<<endl;
	cout<<"9.Exit";
	int option;
	cin>>option;
	cout<<option;
	return option;
}
void evenNum(vector<int> a)
{
	
	for(auto i=a.begin();i!=a.end();i++)
	{
		if(!(*i&1))
		{
			cout<<*i<<" ";
		}
	}
}
