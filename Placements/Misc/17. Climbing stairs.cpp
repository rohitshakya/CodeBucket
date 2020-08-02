/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n) //Dynamic programming
 * title :  Number of ways to climb upstairs// leetcode70
 */

class Solution {
public:
    int climbStairs(int n) {
        
    int res[n + 1]; 
    res[0] = 1; 
    res[1] = 1; //1,1
    for (int i = 2; i <= n; i++) 
    {
        res[i] = res[i - 1] + res[i - 2];
    }
        //1,1,2,3,5,8,13,21 or say fibbonacci series -Dynamic programming
    return res[n]; 
    }
};
/*
here there are 1 0r 2 steps, therefore we initialize first two cells otherwise we fill cell upto max step(here 2); like fibbonacci series;
*/
