#include<bits/stdc++.h>
using namespace std;
struct node{
	int key;
	node * next;
	node(int a){
		key=a;
		next=NULL;
	}
};
node * mergeTwoSortedList(node* a, node* b){
	if(a==NULL)
	{
		return b;
	}
	if(b==NULL)
	{
		return a;
	}
	if(a->key>b->key)
	{
		b->next=mergeTwoSortedList(a,b->next);
		return b;
	}
	else{
		a->next= mergeTwoSortedList(a->next,b);
		return a;
	}
}
int main()
{
	node* a= new node(4);
	a->next=new node(8);
	a->next->next= new node(30);
	
	node * b=new node(5);
	b->next=new node(6);
	b->next->next=new node(40);
	
	node * result= mergeTwoSortedList(a,b);
	while(result!=NULL)
	{
		cout<<result->key<<" ";
		result=result->next;
	}
	return 0;
}
