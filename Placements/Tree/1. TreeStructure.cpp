#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int x)
	{
		data=x;
		left=NULL;
		right=NULL;
	}
};
int main()
{
	Node* a=new Node(5);
	Node* b=new Node(7);
	Node* c=new Node(6);
	a->left=b;
	a->right=c;
	cout<<a->data;
	cout<<a->left->data;
	cout<<a->right->data;
}
