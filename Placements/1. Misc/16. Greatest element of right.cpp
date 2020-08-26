/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  greatest element on the right side/leetcode
 */

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max=arr[arr.size()-1];
        arr[arr.size()-1]=-1;
        for(int i=arr.size()-2;i>=0;i--)
        {
            int temp=arr[i];
            arr[i]=max;
            if(temp>max)
                max=temp;          
        }
        return arr;
        
    }
};
