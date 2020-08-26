/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  
 */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[k]=nums[i];
                k++;
            }
        }
        for(int i=nums.size()-1;i>=k;i--)
        {
            nums[i]=0;
        }
        
        
    }
};
