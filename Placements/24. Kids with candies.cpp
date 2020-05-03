/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  kids with candies
 */
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> :: iterator it;
        it=max_element(candies.begin(),candies.end());
        cout<<*it;
        vector<bool> v;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=*it)
            {
                v.push_back(true);
            }
            else
                v.push_back(false);
        }
        return v;
    }
};
