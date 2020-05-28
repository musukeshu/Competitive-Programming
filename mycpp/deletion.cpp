#include<bits/stdc++.h>
using namespace std;
int maxNodes=7;
int tree[100]={10,4,12,3,5,11,14};
int findNode(int node,int val)
{
	if(tree[node]==0)
	{
		return -1;
	}
	if(val<tree[node])
	{
		return findNode(node*2+1,val);
	}
	else 
		if(val>tree[node])
		{
			return findNode(node*2+2,val);
		}
		else
		{
			return node;
		}
}
int findInorderSuccessor(int pos,int node)
{
	int temp;
	if(tree[node]==0)
	{
		return 0;
	}
	temp=findInorderSuccessor(pos,node*2+1);
	if(temp)
	{
		return temp;
	}
	if(node!=pos)
	{
		return node;
	}
	temp=findInorderSuccessor(pos,node*2+2);
	if(temp)
	{
		return temp;
	}

}
int deletion(int node,int val)
{
	int pos=findNode(0,val);
	if(pos==-1)
	{
		cout<<"Not found Cannot delete"<<endl;
		return 0;
	}
	cout<<"Pos="<<pos<<endl;
	if(tree[pos*2+1]==0 && tree[pos*2+2]==0)
	{
		tree[pos]=0;
		return 1;
	}
	int inorder=findInorderSuccessor(pos,pos);
	cout<<"Inorder="<<inorder<<endl;	
	int temp=tree[inorder];
	int s=deletion(0,tree[inorder]);
	tree[pos]=temp;
	return s;
}
int main()
{
	if(deletion(0,13))
	{
		cout<<"Deletion successful"<<endl;
	}
	else
	{
		cout<<"fail"<<endl;
	}
	for(int i=0;i<15;i++)
	{
		cout<<tree[i]<<" ";
	}
	cout<<endl;
}