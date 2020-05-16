/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Prime Sentence/Edabit 
 */
#include<bits/stdc++.h>
using namespace std;
bool prime(int num);
std::string sentencePrimeness(std::string sentence);
int main()
{
	string a="2rohitANAmica234!!";
	cout<<sentencePrimeness(a);
}
bool prime(int num)
{
	for(int i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			return false;
			break;	
		}
	}
	return true;
	
}
std::string sentencePrimeness(std::string sentence) {
	vector<int> v;
	int sum=0;
	for(int i=0;i<sentence.size();i++)
	{
		if((char)sentence[i]>=48&&(char)sentence[i]<=57)
		{
			sum=sum+(char)sentence[i]-48;	
		}
		else if((char)sentence[i]>=65&&(char)sentence[i]<=90)
		{
			sum=sum+(char)sentence[i]-64;
		}
		else if((char)sentence[i]>=97&&(char)sentence[i]<=122)
		{
			sum=sum+(char)sentence[i]-96;
		}
		
	 if(prime(sum))
	 {
	 	return "Prime Sentence";
	 }
	 else 
	 return "Not a prime sentence";
}
}



