/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(N)
 * Title : check for balanced parenthesis.
 */

#include <bits/stdc++.h> 
using namespace std; 
bool areParanthesisBalanced(string expr) 
{ 
	stack<char> s; 
	char x; 
	for (int i = 0; i < expr.length(); i++) { 
		if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') {  
			s.push(expr[i]); 
			continue; 
		} 

		// IF current current character is not opening 
		// bracket, then it must be closing. So stack 
		// cannot be empty at this point. 
		if (s.empty()) 
			return false; 

		switch (expr[i]) { 
		case ')': 

			// Store the top element in a 
			x = s.top(); 
			s.pop(); 
			if (x == '{' || x == '[') 
				return false; 
			break; 

		case '}': 

			// Store the top element in b 
			x = s.top(); 
			s.pop(); 
			if (x == '(' || x == '[') 
				return false; 
			break; 

		case ']': 

			// Store the top element in c 
			x = s.top(); 
			s.pop(); 
			if (x == '(' || x == '{') 
				return false; 
			break; 
		} 
	} 

	return (s.empty()); 
} 

// Driver program to test above function 
int main() 
{ 
	string expr = "{()}[]"; 
	if (areParanthesisBalanced(expr)) 
		cout << "Balanced"; 
	else
		cout << "Not Balanced"; 
	return 0; 
} 

