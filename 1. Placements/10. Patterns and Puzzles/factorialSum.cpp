/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : 
 * Title : 
 */
// A simple C++ program to compute sum of series 1/1! + 1/2! + .. + 1/n! 
#include <iostream> 
using namespace std; 

// Utility function to find 
int factorial(int n) 
{ 
	int res = 1; 
	for (int i=2; i<=n; i++) 
	res *= i; 
	return res; 
} 

// A Simple Function to return value of 1/1! + 1/2! + .. + 1/n! 
double sum(int n) 
{ 
	double sum = 0; 
	for (int i = 1; i <= n; i++) 
		sum += 1.0/factorial(i); 
	return sum; 
} 

// Driver program to test above functions 
int main() 
{ 
	int n = 20; 
	cout << sum(n); 
	return 0; 
} 

