/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title : Two's a pair
 */

std::string flipEndChars(std::string str) {
	if(str.length()<2) return "Incompatible.";
	if(str[0]==str[str.length()-1]) return "Two's a pair.";
	char temp=str[0];
	str[0]=str[str.length()-1];
	str[str.length()-1]=temp;
	return str;
	}
