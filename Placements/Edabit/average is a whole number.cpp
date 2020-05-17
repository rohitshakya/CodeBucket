/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  avarage is whole number
 */
#include<cmath>
using namespace std;
bool isAvgWhole(std::vector<int> arr) {
	long double av=0;
	for(int i=0;i<arr.size();i++) av=av+arr[i];
	av=av/arr.size();
	if(av-floor(av)==0) return true;
	else return false;
	
	
}
