#include<bits/stdc++.h>
using namespace std;
int maxNode=6;
int tree[]={0,1,2,3,4,5,6};
void preorder(int node)
{
	if(node>=maxNode || tree[node]==-1)
	{
		return;
	}
	cout<<tree[node]<<" ";
	preorder(node*2 + 1);
	preorder(node*2 + 2);
}
void inorder(int node)
{
	if(node>=maxNode || tree[node]==-1)
	{
		return;
	}
	inorder(node*2 + 1);
	cout<<tree[node]<<" ";
	inorder(node*2 + 2);
}
void postorder(int node)
{
	if(node>=maxNode || tree[node]==-1)
	{
		return;
	}
	postorder(node*2 + 1);
	postorder(node*2 + 2);
	cout<<tree[node]<<" ";
}
int main()
{
	preorder(0);
	cout<<endl;
	inorder(0);
	cout<<endl;
	postorder(0);
	cout<<endl;

}