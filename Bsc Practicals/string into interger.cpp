#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;
int main()
{	
	int value;
	string s;
	cout<<"enter the string"<<endl;
	cin>>s;
	std::istringstream ss(s);
	ss>>value;
	
	
	//cout<<value;
	int l=s.length();    //l+1 is length of character array by which we will find am or pm of string     
    
    char arr[l+1];
    strcpy(arr,s.c_str());
    
	if(arr[8]=='a'&&value==12)
	{
		
		cout<<"00:"<<arr[3]<<arr[4]<<":"<<arr[6]<<arr[7];	
	
	}
	else if(arr[8]=='a'&&value!=12)
	{
		printf("%02d",value);
		cout<<":"<<arr[3]<<arr[4]<<":"<<arr[6]<<arr[7];
	}
	else if(arr[8]=='p'&&value==12)
	{
	cout<<"12:"<<arr[3]<<arr[4]<<":"<<arr[6]<<arr[7];
	}
	else
	{
	
	cout<<(value+12);
	cout<<":"<<arr[3]<<arr[4]<<":"<<arr[6]<<arr[7];
	
	}}

