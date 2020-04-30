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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        static int carry=0;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
       addTwoNumbers(l1->next,l2->next);
        l1->val=l1->val+l2->val+carry;
        carry=(l1->val)/10;
        l1->val=l1->val%10;
        return l1;
    }
};
