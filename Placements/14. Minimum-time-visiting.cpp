/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  minimum time visiting/ leet code
 */

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sum=0;
        for(int i=1;i<points.size();i++)
        {
            int xc=abs(points[i][0]-points[i-1][0]);
            int yc=abs(points[i][1]-points[i-1][1]);
            xc>yc?sum+=xc:sum+=yc;
        }
        return sum;
        
    }
};
