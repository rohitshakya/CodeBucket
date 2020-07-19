/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n*n!)
 * Title : Permutations of a string
 */
#include <bits/stdc++.h> 
using namespace std; 
void permute(string a, int l,int r)
{
	if(l==r) cout<<a<<endl;
	else
	for(int i=l;i<=r;i++)
	{
		swap(a[l],a[i]);
		permute(a,l+1,r);
		swap(a[l],a[i]);
	}
}

// Driver Code 
int main() 
{ 
	string str = "ABC"; 
	int n = str.size(); 
	permute(str, 0, n-1); 
	return 0; 
} 



