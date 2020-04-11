#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	//string str;
	char  str[20];
	cout<<"enter a string"<<endl;
	//getline(cin,str);//this is for string
	cin.getline(str,n);//this is for char
	n=strlen(str);
	cout<<n;
	int j=n;
	for(int i=0;i<n;i++)
	{
		
			if(str[i]==str[j])
			{
				cout<<"matched"<<endl;
			}
			else
			{
				cout<<"not a palindrome"<<endl;
				break;
			}
			j--;
		}
		
}
