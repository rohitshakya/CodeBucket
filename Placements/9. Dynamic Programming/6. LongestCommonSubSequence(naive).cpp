/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : naive sol O(2^n), improved sol O(m*n)
 * Title : longest common sub sequence(naive recursive) 
 */

#include <bits/stdc++.h> 
using namespace std; 
int max(int a, int b); 
int lcs( char *X, char *Y, int m, int n ) 
{ 
	if(m==0||n==0)
	return 0;
	else if(X[m-1]==Y[n-1])
	return 1+lcs(X,Y,m-1,n-1);
	else
	return max(lcs(X,Y,m-1,n),lcs(X,Y,m,n-1));
} 
int max(int a, int b) 
{ 
	return (a > b)? a : b; 
} 
int main() 
{ 
	char X[] = "AGGTABC"; 
	char Y[] = "GXTXAYBC"; 
	int m = strlen(X); 
	int n = strlen(Y); 
	cout<<"Length of LCS is "<< lcs( X, Y, m, n ) ; 	
	return 0; 
}
