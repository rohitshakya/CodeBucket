/*
 * Author : Rohit Shakya
 * Date   : April-2020
 *
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 * time complexity : O(nlogn)
 * title : Menu for the opertions on vector
 */
#include<bits/stdc++.h>
using namespace std;
int menu();
void evenNum(vector<int> &a);
void oddNum(vector<int> &a);
void sortVectorAsc(vector<int> &a);
void sortVectorDes(vector<int> &a);
void sumAndAverage(vector<int> &a);
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
	switch(m)
	{
		case 1: evenNum(v);
		break;
		case 2: oddNum(v);
		break;
		case 3: sortVectorAsc(v);
		break;
		case 4: sortVectorDes(v);
		break;
		case 5: sumAndAverage(v);
		break;
		default: cout<<"Wrong choice\n";
		break;
	}
	
	
}
int menu()
{
	cout<<"Choose a function\n";
	cout<<"1.Even no. in the vector\n";
	cout<<"2.Odd no. in the vector\n";
	cout<<"3.Sort in ascending order"<<endl;
	cout<<"4.Sort in descending order"<<endl;
	cout<<"5.Sum and Average "<<endl;
	int option;
	scanf("%d",&option);// first use of scanf() function, it is better than cin in many ways such as faster and also working after than EOF.
	return option;
	
}
void evenNum(vector<int> &a)
{
	
	for(auto i=a.begin();i!=a.end();i++)
	{
		if(!(*i&1))
		{
			cout<<*i<<" ";
		}
	}
}
void oddNum(vector<int> &a)
{
	for(auto i=a.begin();i!=a.end();i++)
	{
		if((*i&1))
		{
			cout<<*i<<" ";
		}
	}
}
void sortVectorAsc(vector<int> &a)
{
	sort(a.begin(),a.end());
	for(auto i=a.begin();i!=a.end();i++)
	{
		cout<<*i<<" ";
	}
}
void sortVectorDes(vector<int> &a)
{
	sort(a.begin(),a.end(),greater<int>());
	for(auto i=a.begin();i!=a.end();i++)
	{
		cout<<*i<<" ";
	}
	
}
void sumAndAverage(vector<int> &a)
{
	int sum=0;
	for(auto i=a.begin();i!=a.end();i++)
	{
		sum+=*i;
	}
	cout<<"Sum of the vector is :"<<sum<<"\n";
	double average=sum/a.size();
	cout<<"Average of the vector is :"<<average<<"\n";
	
}
