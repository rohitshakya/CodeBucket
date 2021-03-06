/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Spiral traversal of a tree
 */
#include<bits/stdc++.h>
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
void givenLevel(Node * root,int level);
void levelOrder(Node * root);
int height(Node *root)
{
	if(root==NULL) return -1;
	else
	{
		int ldepth,rdepth;
		ldepth=height(root->left);
		rdepth=height(root->right);
		if(ldepth>rdepth) return ldepth+1;
		return rdepth+1;
	}
}
void givenLevel(Node * root, int level, int itr)
{
	
	if(root==NULL) return;
	if(level==1) 
	{
		cout<<root->data<<" ";
	}
	else if(level>1) 
	{
		if(itr)	
		{
			givenLevel(root->left,level-1,itr);
			givenLevel(root->right,level-1,itr);
		}
		else
		{
			givenLevel(root->right,level-1,itr);	
			givenLevel(root->left,level-1,itr);
		}	
	}
}

void levelOrder(Node * root)
{
	int h=height(root);
	bool itr=false;
	for(int i=1;i<=h;i++)
	{
		givenLevel(root,i,itr);
		cout<<endl;
		itr=!itr;
	}
}
int main()
{
	Node *root=new Node(5);
	root->left=new Node(7);
	root->right=new Node(11);
	root->left->left=new Node(13);
	root->left->right=new Node(15);
	root->right->left=new Node(21);
	root->right->right=new Node(22);
	root->right->left->left=new Node(29);
	root->right->right->right=new Node(31);
	levelOrder(root);
	cout<<"\nHeight of a binary tree: "<<height(root)<<endl;
}

