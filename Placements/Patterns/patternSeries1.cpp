/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Print the pattern 6,28,66,120...
 */
#include <bits/stdc++.h> 
using namespace std; 
void printSeries(int n) 
{ 
	int k = 2; 
	for (int i = 0; i < n; i++) { 
		cout << (k * (2 * k - 1)) << " "; 
		k += 2; 
	} 
	cout << endl; 
} 
int main() 
{ 
	int n;
	cout<<"enter the value of n\n";
	cin>>n;
	printSeries(n); 
	return 0; 
} 

