/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  merge two linked list
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* res=NULL;
    if(head1==NULL) return (head2);
    else if(head2==NULL) return (head1);
    if(head1->data<=head2->data)
    {
        res=head1;
        res->next=mergeLists(head1->next,head2);
    }
    else
    {
        res=head2;
        res->next=mergeLists(head1,head2->next);
    }
    return res;
}
