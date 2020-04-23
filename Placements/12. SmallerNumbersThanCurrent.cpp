
/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * title : How Many Numbers Are Smaller Than the Current Number/ LC 1365  
 */


class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
        	int sum=0;
        	for(auto j=m.begin();(j->first)<nums[i];j++)
        	{
        		sum=sum+(j->second);
			}
			v.push_back(sum);	
		}
        return v;
     
    }
};
