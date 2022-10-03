#include<bits/stdc++.h>
using namespace std;
    struct node{
    	int key;
    	node *right;
    	node * left;
    	node(int k){
    		key=k;
    		right=NULL;
    		left=NULL;
		}
	};
void inorder(node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->key<<" ";
		inorder(root->right);
	}
}
void preorder(node *root){
	if(root!=NULL){
		cout<<root->key<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(node *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<root->key<<" ";
	}
}
int main(){
	node *root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->left->left=new node(40);
	root->left->right=new node(50);
	root->right->right=new node(60);
	cout<<"The inorder traversal is\n";
	inorder(root);
	cout<<"\nThe postorder traversal is\n";
	postorder(root);
	cout<<"\nThe preorder traversal is\n";
	preorder(root);
}
