#include<bits/stdc++.h>
using namespace std;
struct node{
	int key;
	node* left;
	node* right;
	node(int k)
	{
		key=k;
		left=NULL;
		right=NULL;
	}
};
void zigzag(node * root)
{
	if(root==NULL)
	return;
	stack<node *> s1;
	stack<node *> s2;
	s1.push(root);
	bool lr=true;
	while(!s1.empty())
	{
		node * temp=s1.top();
		cout<<temp->key<<" ";
		if(lr)
		{
			if(temp->left)
			{
				s2.push(temp->left);
			}
			if(temp->right)
			{
				s2.push(temp->right);
			}
		}
		else{
			if(temp->right)
			{
				s2.push(temp->right);
			}
			{
				s2.push(temp->left);
			}	
		}
		s1.pop();
		if(s1.empty())
		{
			lr=!lr;
			swap(s1,s2);
		}
	}
}
int main()
{
	node * root= new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left  = new node(40);
	root->left ->right = new node(50);
	root->right->right - new node(60);
	zigzag(root);
	return 0;
}
