#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
	Node(int x)
	{
		data=x;
		left=NULL;
		right=NULL;
	}
};
void print(Node *root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" "; //preorder traversal
		print(root->left);
		print(root->right);
	}
	
}
int main()
{
	Node *root=new Node(5);
	root->left=new Node(7);
	root->right=new Node(11);
	root->left->left=new Node(78);
	root->left->right=new Node(71);
	root->right->left=new Node(88);
	root->right->right=new Node(78);
	print(root);
}
