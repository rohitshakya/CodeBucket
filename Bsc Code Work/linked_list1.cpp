#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
int main()
{
	Node* a=NULL;
	Node* b=NULL;
	a=new Node();
	b=new Node();
	a->data=5;
	b->data=10;
	a->next=b;
	b->next=NULL;
	
	cout<<a->data;
	cout<<a->next->data+a->data;
	cout<<a->data;
	
	
}
