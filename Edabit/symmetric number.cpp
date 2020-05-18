/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : symmetric number/edabit 
 */
bool isSymmetrical(int num) {
	int m=num;
	int n=0;
	while(num)
	{
		n=n*10+num%10;
		num=num/10;
	}
	if(m==n) return true;
	else return false;
}
