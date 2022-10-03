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
int findHeight(node *root){
	if(root==NULL)
	{
		return 0;
	}
	return max(findHeight(root->left),findHeight(root->right))+1;
}
int main()
{
 node *root=new node(10);
 root->left = new node(20);
 root->left->left =new node(30);
 root->left->right=new node(40);
 root->left->left->left=new node(50);
 cout<<findHeight(root)<<endl;
}

