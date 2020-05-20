/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  collection by digits
 */

#include<cmath>
using namespace std;
std::vector<int> filterDigitLength(std::vector<int> arr, int n) {
	int d=pow(10,n-1);
	vector<int> v;
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]/d>=1&&arr[i]/d<=9) v.push_back(arr[i]);
	}
	return v;
	
}
