/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(1)
 * title :  check whether the alternating bits are diffrent/leetcode/important/lc693
 */

class Solution {
public:
    bool hasAlternatingBits(int n) {
    	/*
    	int m=n>>2;
        n=n^m;
        return !(n & (n - 1));
		*/
        n^=n>>2;
        return !(n & (n - 1)); //important question 
        
    }
};
