/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : 12 days of chrismas 
 */
int xmasItems(int n) {
	int sum=0;
	int i=1;
	while(n)
	{
		sum=sum+n*i;
		i++;
		n--;
	}
	return sum;
}
