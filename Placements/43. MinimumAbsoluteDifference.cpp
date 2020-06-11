/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(nlogn)
 * Title :  minimumAbsDifference
 */
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& v) {
        sort(v.begin(),v.end());
        int d=abs(v[0]-v[1]);
       for(int i=1;i<v.size()-1;i++)
        {
            if(abs(v[i]-v[i+1])<d) d=abs(v[i]-v[i+1]);
        }
        vector<vector<int>> arr;
        for(int i=0;i<v.size()-1;i++)
        {
            if(abs(v[i]-v[i+1])==d) 
               {
                arr.push_back({v[i],v[i+1]});
               }
        }
               return arr;
    }
};
