/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : add two number represent as a linked list
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *c1 = l1;
        ListNode *c2 = l2;
        ListNode *resList = new ListNode(0);
        ListNode *temp = resList;
        int sum = 0;
        while (c1 != NULL || c2 != NULL) {
            sum /= 10;
            if (c1 != NULL) {
                sum += c1->val;
                c1 = c1->next;
            }
            if (c2 != NULL) {
                sum += c2->val;
                c2 = c2->next;
            }
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }
        if (sum / 10 == 1)
            temp->next = new ListNode(1);
        return resList->next;
        
    }
};
