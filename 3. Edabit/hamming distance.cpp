/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  hamming distance
 */

int hammingDistance(std::string str1, std::string str2) {
	int count=0;
	for(int i=0;i<str1.size();i++)
	{
		if(str1[i]!=str2[i]) count++;
	}
	return count;
	
}
