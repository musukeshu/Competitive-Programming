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
int main(){
	node *root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->left->left=new node(40);
}
