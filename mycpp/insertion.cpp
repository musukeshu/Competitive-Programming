#include<bits/stdc++.h>
using namespace std;
int maxNode=7;
int tree[100]={10,4,12,3,5,11,14};
void insertion(int node,int val)
{	
	if(tree[node]==0)
	{
		cout<<"true"<<endl;
		tree[node]=val;
		cout<<node<<endl;
		maxNode++;
		return;
	}
	if(val<tree[node])
	{
		insertion(node*2+1,val);
	}
	else if(val>tree[node])
	{
		insertion(node*2+2,val);
	}
	else
	{
		cout<<"Value already present"<<endl;
	}
}
void displayTree()
{
	int c=0,node=0;
	int n;
	while(c<maxNode)
	{
		cout<<tree[node]<<" ";
		node++;
		if(tree[node])
		{
			c++;
			cout<<"\nc="<<c<<endl;
		}
	}
}
int main()
{
	displayTree();
	insertion(0,7);
	displayTree();
}