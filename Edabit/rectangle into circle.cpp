/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title :  rectangle into circle
 */

bool rectangleInCircle(int w, int h, int radius) {
	if((w*w+h*h)<=(4*radius*radius)) return true;
	else return false;
	
}
