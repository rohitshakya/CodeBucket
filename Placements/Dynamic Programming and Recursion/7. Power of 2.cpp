/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(1)
 * title :  PowerOFTwo
 */

class Solution {
public:
    bool isPowerOfTwo(int n) {
    
        if(n<=0) return false; //0ms solution 
        return !(n&(n-1));
    

    /*
        if(n==1) return true;			//4ms solution
        if(n<2) return false;
        if(n&1) 
        {
         return false;
        }
        return isPowerOfTwo(n>>1);
        */
        
    }
};
