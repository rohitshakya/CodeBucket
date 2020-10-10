/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  Dice gambling/ edabit
 */

int rolls(std::vector<int> arr) {
	int sum=0;
	int flag=2;
	for(int i=0;i<arr.size();i++)
	{
		if(flag>1) sum=sum+arr[i];
		if(flag==6) sum=sum+arr[i];
		flag=arr[i];
	}
	return sum;
}
