/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  even or odd no of factors
 */
#include<cmath>
using namespace std;
std::string factor_group(int num) {
	long double s=sqrt(num);
	if(s-floor(s)==0) return "odd";
	else return "even";
}
