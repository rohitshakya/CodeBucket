/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  sort by ascii
 */
std::string asciiSort(std::vector<std::string> arr) {
	int sum1=0;
	int sum2=0;
		for(int i=0;i<arr[0].size();i++) sum1=sum1+(char)arr[0][i];
	for(int i=0;i<arr[1].size();i++) sum2=sum2+(char)arr[1][i];
	if(sum1<sum2) return arr[0];
	else return arr[1];
}
