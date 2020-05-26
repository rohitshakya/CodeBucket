/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  calculate and round upto n decimal places
 */

#include<cmath>
float mean(std::vector<int> arr) {
	float a=0;
	int n=arr.size();
	for(auto x:arr) a=a+x;
	a/=n;
	round(a*pow(10, 2))/pow(10, 2);
	
}
