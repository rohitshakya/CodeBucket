/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(mlogn)
 * title :  count the negative numbers
 */
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
         for (const vector<int>& row: grid)
            count += upper_bound(row.rbegin(), row.rend(), -1) - row.rbegin();
        return count;
    }
};
