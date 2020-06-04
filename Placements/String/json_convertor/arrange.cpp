#include<bits/stdc++.h>
using namespace std;
int main()
{
	ofstream myfile;
  myfile.open ("india.txt");
  string s="790983:Duboka,791009:Drugovo,791121:KomunaeDragashit,310:UrochishcheItkol,796095:Strimnica";
	long long int n=s.length();
	string st="";
	string temp="";
	vector<string> v;
	for(int i=0;i<n;i++)
	{
		if(s[i]==':')
		{	
			temp=st;			
			st="";
		}
		if(s[i]==',')
		{
			v.push_back(st+temp);
			st="";
		}
		st=st+s[i];
	}
	for(int i=0;i<v.size();i++)
	{
		myfile << v[i]<<"\n";
	}
    myfile.close();
}
