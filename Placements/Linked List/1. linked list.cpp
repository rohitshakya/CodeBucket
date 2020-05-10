/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * title :  Linked list operations
 */

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

struct linked_list
{
    node *head, *tail;
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(34);
    node *tmp;
    tmp=a.head;
    while(tmp!=NULL) //traverse from head to tail
    {
    	cout<<tmp->data;
    	tmp=tmp->next;
	}
    return 0;
}
