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
void printk(node *root, int k)
{
	if(root==NULL)
	{
		return;
	}
	else if(k==0)
	{
		cout<<root->key<<" ";
	}
	else{
		printk(root->left,k-1);
		printk(root->right,k-1);
	}
}
int main()
{
 node *root=new node(10);
 root->left = new node(20);
 root->left->left =new node(30);
 root->left->right=new node(40);
 root->left->left->left=new node(50);
 printk(root, 1);
 cout<<endl;
 printk(root,3);
 cout<<endl;
 printk(root,2);
}
