/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : CountDecoding 
 */
#include<bits/stdc++.h>
using namespace std;
bool checkValidity(vector<int> &v)
{
	for(int i=0;i<v.size();i++)
	{
		if(v[i]>26||v[i]<1) return false;
	}
	return true;
}
int countDecoding(vector<int> &v)
{
	int count=0;
	int commonSetCount=0;
	int i;
	for(i=1;i<v.size()-1;i++)
	{
		if(v[i-1]*10+v[i]<=26) count++;
		if((v[i-1]*10+v[i]<=26)&&(v[i]*10+v[i+1]<=26)) commonSetCount++;
	}
	if(v[i-1]*10+v[i]<=26) count++;
	count-=2*commonSetCount;
//	cout<<"count: "<<count<<" common: "<<commonSetCount<<endl;
	int totalCount=pow(2,count)*pow(3,commonSetCount);
	return totalCount;
	
}
int main()
{
	string s; //6324120129
	cout<<"Enter a string"<<endl;
	cin>>s;
	vector<int> v;
	int count=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='0') v[i-1]*=10;
		else v.push_back(s[i]-48);
	}
	/* --For Display
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	*/ 
	bool check=checkValidity(v);
	if(check)
	{
		count=countDecoding(v);	
		cout<<"\nTotal count: "<<count;
	}
	else
	cout<<"Not a valid string";
	
}
