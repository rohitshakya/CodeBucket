/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  Student record/leetcode
 */

class Solution {
public:
    bool checkRecord(string s) {
        int a_count=0;
        int l_count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
            {
                a_count++;
                l_count=0;
                if(a_count==2) return false;
            }
            if(s[i]=='P')
            {
                l_count=0;
            }
            if(s[i]=='L')
            {
                l_count++;
                if(l_count==3) return false;
            }
        }
        return true;
    }
};
