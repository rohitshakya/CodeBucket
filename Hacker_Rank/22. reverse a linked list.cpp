/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  reverse a linked list
 */

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    //initialize three pointers curr=head, prev=null and next=null
    SinglyLinkedListNode* next=NULL;
    SinglyLinkedListNode* prev=NULL;
    SinglyLinkedListNode* curr=head;
    while(curr!=NULL)
    {
        next=curr->next; //store next
        curr->next=prev;
        //move curr and prev one step forward 
        prev=curr;
        curr=next;
    }

    head=prev;
    return head;
}
