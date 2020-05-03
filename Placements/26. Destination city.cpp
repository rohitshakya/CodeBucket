/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title : Destination city //leetcode 
 */
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> s1;
        for(int i=0;i<paths.size();i++)
        {
            s1.insert(paths[i][1]);
        }
        set<string>:: iterator it;
        for(int i=0;i<paths.size();i++)
        {
            s1.erase(paths[i][0]);
        }
        it=s1.begin();
        return *it;
    }
};
