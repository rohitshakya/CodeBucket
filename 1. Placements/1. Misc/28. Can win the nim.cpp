/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(1)
 * title :  can win the nim game
 */

class Solution {
public:
    bool canWinNim(int n) {
        if((n-1)%4==0||(n-2)%4==0||(n-3)%4==0) return true;
        else return false;
        
    }
};
