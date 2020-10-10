/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  start end time
 */

class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count=0;
        for(int i=0;i<startTime.size();i++)
        {
            if((startTime[i]<=queryTime)&&(endTime[i]>=queryTime)) count++;
        }
        return count;
    }
};
