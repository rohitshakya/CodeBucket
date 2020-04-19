/*
 * Author : Rohit Shakya
 * Date   : June-July 2016
 *
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number upto u want prime no"<<endl;
	cin>>n;
	for(int j=2;j<=n;j++)
	{
		int flag=0;
	
	for(int i=2;i<=j/2;i++)
	{
		if(j%i==0)
		flag=1;	
	}
	if(flag==0)
	cout<<j<<" ";  
   }
}
