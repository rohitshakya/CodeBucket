#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="azerdii";
	int k=2;
	if(s.length()<k) cout<<"Not found!";
    int count=0;
    int flag=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"Not found!";
    for(int i=0;i<k;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            count++;
        }
    }
    cout<<count;
    vector<int> v;
    v.push_back(count);
    for(int i=k;i<s.length();i++)
    {
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            count++;
        }
        if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u')
        {
            count--;
        }
        v.push_back(count);
    }
    vector<int>::iterator it;
    it=max_element(v.begin(),v.end());
    int m;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==*it)
        {
            m=i;
            break;
        }
    }
    string s2=s.substr(m,k);
    cout<<s2;
	
}

    
