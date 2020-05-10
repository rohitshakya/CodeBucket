/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  middle of the linked list
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
    ListNode* middleNode(ListNode* head) {
        ListNode *ptr=head;
        int count=0;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
    for(int i=0;i<count/2;i++)
    {
        head=head->next;
    }
        return head;
    }};
