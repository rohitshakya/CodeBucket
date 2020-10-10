/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(logn)
 * Title :  Parity analysis
 */

bool parityAnalysis(int num) {
	int m=num;
	int sum=0;
	while(num)
	{
		sum=sum+num%10;
		num=num/10;
	}
	if((sum&1)==(m&1)) return true;
	else return false;
}
