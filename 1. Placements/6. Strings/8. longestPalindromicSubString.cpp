/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title : find the length of longest palindromic sub-string using Recursion 
 */
#include <iostream> 
using namespace std; 
int max(int x, int y) 
{ 
	return x>y?x:y; 
} 

int lps(string str, int i, int j, int count) 
{ 
	if(i>j) return count;
	if(i==j)
	return count+1;
	if(str[i]==str[j])
	{
		count=lps(str,i+1,j-1,count+2);
		return max(count,max(lps(str,i+1,j,0),lps(str,i,j-1,0)));
	} 
	return max(lps(str,i+1,j,0),lps(str,i,j-1,0));
}  
int main() 
{ 
	string str = "aaaabbaa"; 
	cout << lps(str,0,str.length()-1,0); 
	return 0; 
} 

