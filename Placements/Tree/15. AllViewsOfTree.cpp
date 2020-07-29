/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : all views of the tree
 */
#include<bits/stdc++.h>
using namespace std;

struct Node{
 	int data;
 	Node* left;
 	Node* right;
 	Node(int data)
 	{
 		this->data=data; 
 		this->left=NULL;
 		this->right=NULL;
	}
 };
void leftView(Node* root)
{
	if(root==NULL) return;
	else 
	{
		cout<<root->data<<" ";
		if(root->left) leftView(root->left);
		else leftView(root->right);
	}
}
void rightView(Node* root)
{
	if(root==NULL) return;
	else 
	{
		cout<<root->data<<" ";
		if(root->right) rightView(root->right);
		else rightView(root->left);
	}
}
void completeView(Node* root)
{
	if(root==NULL) return;
	else 
	{
		cout<<root->data<<" ";
		completeView(root->left);
		completeView(root->right);	
	}	
}
void fillMap(Node* root,int d,int l,map<int,pair<int,int>> &m){ 
    if(root==NULL) return; 
  
    if(m.count(d)==0){ 
        m[d] = make_pair(root->data,l); 
    }else if(m[d].second>l){ 
        m[d] = make_pair(root->data,l); 
    } 
  
    fillMap(root->left,d-1,l+1,m); 
    fillMap(root->right,d+1,l+1,m); 
} 
  
// function should print the topView of 
// the binary tree 
void topView(struct Node *root){ 
  
    //map to store the pair of node value and its level  
    //with respect to the vertical distance from root.  
    map<int,pair<int,int>> m; 
  
    //fillmap(root,vectical_distance_from_root,level_of_node,map) 
    fillMap(root,0,0,m); 
  
    for(auto it=m.begin();it!=m.end();it++){ 
        cout << it->second.first << " "; 
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
	leftView(root);
	cout<<endl;
	rightView(root);
	cout<<endl;
	completeView(root);
	cout<<endl;
	topView(root);
}
