//Check if a binary tree is an BST
//Max and min method TC= O(n) SC=O(n)

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
bool isBSTUtility(node* root, int mini, int maxi)
{
	if(root==NULL)
	return 1;
	if(root->key<=mini||root->key>=maxi)
	{
		return 0;
	}
	return (isBSTUtility(root->left, mini, root->key))&&(isBSTUtility(root->right, root->key, maxi));
}
bool isBST(node * root)
{
	return isBSTUtility(root, INT_MIN, INT_MAX);
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
