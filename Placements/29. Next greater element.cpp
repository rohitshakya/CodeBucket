/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n^2)
 * title :  Next greatest element
 */
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++)
        {
            int k;
            for(int j=0;j<nums2.size();j++)
            {
                if(nums2[j]==nums1[i])
                {
                    k=j;
                    break;
                }
            }
            v.push_back(-1);
            for(int j=k+1;j<nums2.size();j++)
            {
                
                if(nums2[j]>nums1[i])
                {
                    v[i]=nums2[j];
                    break;
                }
            }
        }
        return v;
    }
};
