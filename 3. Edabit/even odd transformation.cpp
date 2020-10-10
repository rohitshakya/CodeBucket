/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n^2)
 * Title :  even odd transformation
 */

std::vector<int> evenOddTransform(std::vector<int> arr, int n) {
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<arr.size();j++)
		{
			if(arr[i]&1) arr[i]+=2;
			else arr[i]-=2;
		}
	}
	return arr;
	
}
