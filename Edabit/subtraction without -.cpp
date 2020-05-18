/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title : subtract two numbers by not using -/+ 
 */

int mySub(int a, int b) {
	if(a>b)
	{
	if (b == 0) return a; 
    return mySub(a ^ b, (~a & b) << 1);
	}
	else
	{
	if (a == 0) return b; 
    return mySub(a ^ b, (~a & b) << 1);
	}
     
}
