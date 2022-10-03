//Check if a binary tree is an BST
//In-order traversal TC-O(n) SC-O(1)

#include<bits/stdc++.h>
using namespace std;
struct node{
	int key;
	node *right;
	node *left;
	node(int k){
		key=k;
		right=NULL;
		left=NULL;
	}
};
bool isBSTUtility(node* root, node *& prev)
{
	if(root)
	{
	if(!isBSTUtility(root->left,prev))
	return 0;
	if(prev!=NULL&&root->key<=prev->key)
	{
		return 0;
	}
	prev=root;
	return isBSTUtility(root->right,prev);
	}
	return 1;
}
bool isBST(node * root)
{
	node * prev=NULL;
	return isBSTUtility(root,prev);
}
int main()
{
 node *root=new node(10);
 root->left = new node(20);
 root->left->left =new node(30);
 root->left->right=new node(40);
 root->left->left->left=new node(50);
 if(isBST(root))
 {
 	cout<<"IS BST"<<endl;
 }
 else{
 	cout<<"Is Not BST"<<endl;
 }
 return 0;
}
