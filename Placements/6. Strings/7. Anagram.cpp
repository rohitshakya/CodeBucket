/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title : check wether two string are anagram of each other
 * Method: use sorting, count array of characters
 */
 #include<bits/stdc++.h>
 using namespace std;
bool anagram(char* str1, char* str2) 
{ 
	// Create a count array and initialize all values as 0 
	int NO_OF_CHARS=14;
	int count[NO_OF_CHARS] = { 0 }; 
	int i; 

	// For each character in input strings, increment count in 
	// the corresponding count array 
	for (i = 0; str1[i] && str2[i]; i++) { 
		count[str1[i]]++; 
		count[str2[i]]--; 
	} 

	// If both strings are of different length. Removing this condition 
	// will make the program fail for strings like "aaca" and "aca" 
	if (str1[i] || str2[i]) 
		return false; 

	// See if there is any non-zero value in count array 
	for (i = 0; i < NO_OF_CHARS; i++) 
		if (count[i]) 
			return false; 
	return true; 
} 

int main() 
{ 
	char str1[] = "geeksforgeeks"; 
    char str2[] = "forgeeksgeeks";
	cout<<anagram(str1,str2);
	return 0; 
} 
