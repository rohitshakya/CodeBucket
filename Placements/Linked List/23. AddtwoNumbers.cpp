/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : A C++ recursive program to add two linked lists 
 */
#include <bits/stdc++.h> 
using namespace std; 
struct Node 
{ 
	int data; 
	Node* next; 
	Node(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};
void printList(Node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
Node* addTwoNumbers(Node* l1, Node* l2) {
        
        Node *c1 = l1;
        Node *c2 = l2;
        Node *resList = new Node(0);
        Node *temp = resList;
        int sum = 0;
        while (c1 != NULL || c2 != NULL) {
            sum /= 10;
            if (c1 != NULL) {
                sum += c1->data;
                c1 = c1->next;
            }
            if (c2 != NULL) {
                sum += c2->data;
                c2 = c2->next;
            }
            temp->next = new Node(sum % 10);
            temp = temp->next;
        }
        if (sum / 10 == 1)
            temp->next = new Node(1);
        return resList->next;
        
    }
int main()
{
	Node *root1=new Node(1);
	root1->next=new Node(9);
	root1->next->next=new Node(9);
	root1->next->next->next=new Node(2);
	root1->next->next->next->next=new Node(3);
	Node *root2=new Node(7);
	root2->next=new Node(8);
	root2->next->next=new Node(2);
	root2->next->next->next=new Node(6);
	root2->next->next->next->next=new Node(6);
	printList(root1);
	printList(root2);
 	Node *res=addTwoNumbers(root1,root2);
 	printList(res);
}

