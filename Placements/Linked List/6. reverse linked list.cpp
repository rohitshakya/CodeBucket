/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title : Reverse the linked list 
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
    ListNode* reverseList(ListNode* head) {
        ListNode *ptr1=NULL;
        ListNode *ptr2;
        while(head!=NULL)
        {
            ptr2=head->next;
            head->next=ptr1;
            ptr1=head;
            head=ptr2;
        }
        free(ptr2);
        free(head);
        return ptr1;
        
    }
};
