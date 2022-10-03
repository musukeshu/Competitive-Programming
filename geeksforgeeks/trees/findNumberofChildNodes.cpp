#include<bits/stdc++.h>
using namespace std;
struct node{
	int val;
	node* left;
	node* right;
	node(int key){
		val=key;
		left=NULL;
		right=NULL;
	}
};
int findNumberOfChildNodes(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	int c=findNumberOfChildNodes(root->left)+findNumberOfChildNodes(root->right)+1;
	cout<<root->val<<" "<<c-1<<endl;
	return c;
}
int main(){
	node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->right->left=new node(4);
	root->right->right=new node(5);
	int z= findNumberOfChildNodes(root);
}
