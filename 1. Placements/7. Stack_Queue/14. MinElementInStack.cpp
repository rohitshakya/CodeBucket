/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title : getMinimum() in O(1) time and O(1) extra space.
 */
#include <bits/stdc++.h> 
using namespace std; 
struct MyStack 
{ 
	stack<int> s; 
	int minEle; 
	void getMin() 
	{ 
		if (s.empty()) 
			cout << "Stack is empty\n"; 
		else
			cout <<"Minimum Element in the stack is: "
				<< minEle << "\n"; 
	} 

	void peek() 
	{ 
		if (s.empty()) 
		{ 
			cout << "Stack is empty "; 
			return; 
		} 

		int t = s.top(); // Top element. 

		cout << "Top Most Element is: "; 
		(t < minEle)? cout << minEle: cout << t; 
	} 
	void pop() 
	{ 
		if (s.empty()) 
		{ 
			cout << "Stack is empty\n"; 
			return; 
		} 

		cout << "Top Most Element Removed: "; 
		int t = s.top(); 
		s.pop(); 

		// Minimum will change as the minimum element 
		// of the stack is being removed. 
		if (t < minEle) 
		{ 
			cout << minEle << "\n"; 
			minEle = 2*minEle - t; 
		} 

		else
			cout << t << "\n"; 
	} 

	// Removes top element from MyStack 
	void push(int x) 
	{ 
		// Insert new number into the stack 
		if (s.empty()) 
		{ 
			minEle = x; 
			s.push(x); 
			cout << "Number Inserted: " << x << "\n"; 
			return; 
		} 

		// If new number is less than minEle 
		if (x < minEle) 
		{ 
			s.push(2*x - minEle); 
			minEle = x; 
		} 

		else
		s.push(x); 

		cout << "Number Inserted: " << x << "\n"; 
	} 
}; 

// Driver Code 
int main() 
{ 
	MyStack s; 
	s.push(3); 
	s.push(5); 
	s.getMin(); 
	s.push(2); 
	s.push(1); 
	s.getMin(); 
	s.pop(); 
	s.getMin(); 
	s.pop(); 
	s.peek(); 

	return 0; 
} 

