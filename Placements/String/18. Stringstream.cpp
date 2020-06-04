/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  conversion integer string to integer value
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//method 1
	string abc="1000";
	int x=0;
	stringstream g(abc);
	g>>x;
	cout<<"by string stream method "<< x<<endl
	cout<<endl;
	//method 2
	int y=0;
	for(int i=0;i<abc.length();i++)
	{
		y=y*10;
		y=y+int(abc[i])-48;
	}
	cout<<"by ascii value "<<y<<endl;
	//method 3
	int num=3456;
	stringstream str1; 
    str1 << num;
    string sr;
    str1>>sr;
	cout<<"number into string "<<sr;
}
