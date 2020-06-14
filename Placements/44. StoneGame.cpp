	/*
	 * Author : Rohit Shakya
	 * Date   : June-2020
	 * Compiler : g++ 4.9.2
	 * Flags    : -std=c++14
	 * Time complexity : O(1)
	 * Title :  StoneGame
	 */
	#include<iostream>
	using namespace std;
	int main()
	{
		int t;
		cout<<"enter the number of test cases"<<endl;
		cin>>t;
		while(t--)
		{
			int n;
			cout<<"enter the number of stones"<<endl;
			cin>>n;
			if(n%5==0||n%5==2)
			{
				cout<<"NO"<<endl;
			}
			else
			cout<<"Yes"<<endl;	
		}	
	}
