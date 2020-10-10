/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  vector to set
 */

#include <set>

std::vector<int> set(std::vector<int> arr) {
	std::set<int> convDS {arr.begin(),arr.end()};
	return std::vector<int> {convDS.begin(),convDS.end()};
}
