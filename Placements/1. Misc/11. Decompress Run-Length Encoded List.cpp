/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n*freq)
 * title : Decompress run length encoded list/LC 1313 
 */

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        for(int i=0;i<n/2;i++)
        {
            int freq=nums[2*i];
            for(int j=0;j<freq;j++)
            {
                v.push_back(nums[2*i+1]);
            }
        }
        return v;
        
    }
};
