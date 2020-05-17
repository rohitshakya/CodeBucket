/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title :  solution of qudratic equation
 */
int solutions(int a, int b, int c) {
	if(a==1&&c<0) return 2;
	else if(a==1&&c==0) return 1;
	else if(a==1&&c>0) return 0;
	else if(a==0&&b==1) return 1;
	
}
