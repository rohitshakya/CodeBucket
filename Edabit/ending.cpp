/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : end with the given string  
 */
bool checkEnding(std::string str1, std::string str2) {
	int n1=str1.length();
	int n2=str2.length();
	for(int i=1;i<=str2.length();i++)
	{
		if((str1[n1-i])!=(str2[n2-i]))
		{
			return false;
		}
	}
 return true;
}
