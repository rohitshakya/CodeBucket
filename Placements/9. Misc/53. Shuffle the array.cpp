/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : shuffle the array
 */
 class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(nums[i]);
            v.push_back(nums[n+i]);
        }
        return v;
    }
};

