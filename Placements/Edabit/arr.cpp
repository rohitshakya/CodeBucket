/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : multiply by length 
 */
std::vector<int> multiplyByLength(std::vector<int> arr) {
	for(int i=0;i<arr.size();i++) arr[i]=arr[i]*arr.size();
	return arr;	
}
