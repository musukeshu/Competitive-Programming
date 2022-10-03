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
int maxlevelsum(node * root)
{
	if(root==NULL)
	{
		return 0;
	}
	int result=root->key;
	queue <node *> q;
	q.push(root);
	while(!q.empty())
	{
		int count=q.size();
		int sum=0;
		while(count--)
		{
			node* temp=q.front();
			sum+=temp->key;
			q.pop();
			if(temp->left!=NULL)
			{
				q.push(temp->left);
			}
			if(temp->right!=NULL)
			{
				q.push(temp->right);
			}
		}
		result=max(sum,result);
	}
	return result;
}
int main()
{
 node *root=new node(10);
 root->left = new node(20);
 root->left->left =new node(30);
 root->left->right=new node(40);
 root->left->left->left=new node(50);
 cout<<"The maximum level sum of a binary tree "<<maxlevelsum(root);
}
