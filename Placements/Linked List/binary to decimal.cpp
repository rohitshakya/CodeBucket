/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  binary to decimal
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        int count=0;
        while(head!=NULL)
        {
            count++;
            v.push_back(head->val);
            head=head->next;
        }
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i])
            sum=sum+pow((2*v[i]),(count-1-i));   
        }
        return sum;
        
    }
};
