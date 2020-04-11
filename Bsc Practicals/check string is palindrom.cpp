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
	cout<<n<<endl;
	int i,j,flag=1;
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
		if(str[i]!=str[j])
		{
			flag=0;
			break;
		}
		
	}
	if(flag!=0)
	{
		cout<<"it is a palindrome";
	
	}
	else
	{
		cout<<"it is not a palindrome"<<endl;
	}
}
