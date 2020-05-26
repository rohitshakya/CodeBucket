/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title :  
 */

#include <cmath>
double myPi(int n) {
	return round(M_PI*pow(10, n))/pow(10, n);
}
