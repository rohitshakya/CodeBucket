/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  target array
 */
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
	vector<int> vec;
	for(int i=0;i<nums.size();i++) vec.insert(vec.begin()+index[i], nums[i]);
    return vec;  
    }
};
