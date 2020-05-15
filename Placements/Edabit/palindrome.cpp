/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title : palindrome 
 */
bool checkPalindrome(std::string str) {
	int n=str.length();
	bool flag=true;
	for(int i=0;i<n/2;i++)
	{
		if(str[i]!=str[n-1]) flag=false; break;
	}
return flag;
}
