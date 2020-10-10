/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(logn)
 * Title : water jug problem
 * Formula : Bezout's Identity
 */
class Solution {
public:
    int gcd(int x,int y)
 {
 	if(y==0) return x;
 	else return gcd(y,x%y);
 }
    bool canMeasureWater(int x, int y, int z) {
        if(x + y < z) return false;
        if( x == z || y == z || x + y == z ) return true;
        int hcf=gcd(x,y);
        return (z%hcf==0);
        
    }
};

