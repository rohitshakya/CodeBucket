/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title : sort array 
 */
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> v1,v2;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]&1)
            {
                v1.push_back(A[i]);
            }
            else
            {
                v2.push_back(A[i]);
            }
        }
         
        for(int i=0;i<v1.size();i++)
        {
            v2.push_back(v1[i]);
        }
        return v2;
    }
};
