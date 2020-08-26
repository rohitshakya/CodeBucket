/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : C++ program to check if a string is two time rotation of another string. 
 */
#include<bits/stdc++.h> 
using namespace std; 
bool isRotated(string str1, string str2) 
{ 
	if (str1.length() != str2.length()) 
		return false; 

	string clock_rot = ""; 
	string anticlock_rot = ""; 
	int len = str2.length();  
	anticlock_rot = anticlock_rot + str2.substr(len-2, 2) + str2.substr(0, len-2) ; 
	clock_rot = clock_rot + str2.substr(2) + str2.substr(0, 2) ; 
	return (str1.compare(clock_rot) == 0 || str1.compare(anticlock_rot) == 0); 
} 

int main() 
{ 
	string str1 = "geeks"; 
	string str2 = "eksge"; 
	isRotated(str1, str2) ? cout << "Yes": cout << "No"; 
	return 0; 
} 

