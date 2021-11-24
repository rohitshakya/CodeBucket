/*
 * Author : Rohit Shakya
 * Date   : August-2021
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : In-Place Move Zeros to End of List
 */
vector<int> solve(vector<int>& nums) {

    int count=0;
    int j=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=0)
        {
            nums[j++]=nums[i];
        }
    }
    for(int i=j;i<nums.size();i++)
    {
        nums[i]=0;
    }
    return nums;
    
}
