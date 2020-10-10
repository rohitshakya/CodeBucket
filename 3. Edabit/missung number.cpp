/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : missing numbers 
 */
int missingNum(std::vector<int> arr) {
	int x=0;
	int i=0;
	for(i=0;i<10;i++)
	{
		x=i^arr[i]^x;
	}
	return x^i;
	
}
