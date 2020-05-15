/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title : swap two numbers by bit manipulation 
 */
#include <utility>
using namespace std;
std::pair<int, int> XOR(int a, int b) {
	int x=a^b;
	a=x^a;
	b=x^a;
	return make_pair(a,b);
}
