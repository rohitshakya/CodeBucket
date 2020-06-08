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
void printpre(Node *root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" "; //preorder traversal
		printpre(root->left);
		printpre(root->right);
	}
	
}
void printpost(Node *root)
{
	if(root!=NULL)
	{
		
		printpost(root->left);
		printpost(root->right);
		cout<<root->data<<" "; //postorder traversal
	}
	
}
void printin(Node *root)
{
	if(root!=NULL)
	{
		
		printin(root->left);
		cout<<root->data<<" "; //inorder traversal
		printin(root->right);
	}
	
}
int main()
{
	Node *root=new Node(5);
	root->left=new Node(3);
	root->right=new Node(7);
	root->left->left=new Node(1);
	root->left->right=new Node(4);
	root->right->left=new Node(6);
	root->right->right=new Node(8);
	printin(root);
	cout<<endl;
	printpre(root);
	cout<<endl;
	printpost(root);
}
