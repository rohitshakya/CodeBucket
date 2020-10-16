/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : balance_factor
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
int height(Node *root)
{
	if(root==NULL) return 0;
	else
	{
		int ldepth,rdepth;
		ldepth=height(root->left);
		rdepth=height(root->right);
		if(ldepth>rdepth) return ldepth+1;
		return rdepth+1;
	}
}

int degree_of_imbalance(Node *root)
{
	int static max=INT_MIN;
	int lh=height(root->left);
	int rh=height(root->right);
	int temp=abs(lh-rh)+1;
	if(temp>max) max=temp;
	return max;
}

int main()
{
	Node *root=new Node(2);
	root->left=new Node(6);
	root->right=new Node(3);
	root->left->left=new Node(19);
	root->left->right=new Node(8);
	root->left->right=new Node(1);
	cout<<"Height of a binary tree: "<<degree_of_imbalance(root)<<endl;
}

