/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : integer to roman conversion
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number less than 4000"<<endl;
	cin>>n;
	if(n>=4000||n<1) 
	{
		cout<<"enter a valid number"<<endl;
		return 0;	
	}
	vector<int> place(4,0);
	int i=3;
	int w=n;
	while(n)
	{
		place[i--]=n%10;
		n=n/10;
	}
	string roman="";
	for(int i=1;i<=place[0];i++)
	{
		roman+="M";
	}
	if(place[1]==9) roman+="CM";
	else
	{
		int d=place[1]/5;
		int c=place[1]%5;
		if(d) roman+="D";
		if(c==4) roman+="CD";
		else
		{
			for(int i=1;i<=c;i++)
			{
				roman+="C";
			}
			
		}
			
	}
	if(place[2]==9) roman+="XC";
	else
	{
		
		int l=place[2]/5;
		int x=place[2]%5;
		if(l) roman+="L";
		if(x==4) roman+="XL";
		else
		{
			for(int i=1;i<=x;i++)
			{
				roman+="X";
			}
			
		}
		
		
	}
	if(place[3]==9) roman+="IX";
	else
	{
		int v=place[3]/5;
		int p=place[3]%5;
		if(v) roman+="V";
		if(p==4) roman+="IV";
		else
		{
			for(int i=1;i<=p;i++)
			{
				roman+="I";
			}
			
		}
		
		
	}
	
	cout<<"Roman conversion of "<<w<<" is: "<<roman;
}
