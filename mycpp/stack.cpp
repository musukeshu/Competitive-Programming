#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
	int data;
	struct node *next;
}link;
void push(link *start,int x)
{
	link *p=start;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->data=x;
	p->next=new link;
	p->next->next=NULL;
}
void pop(link *start)
{
	link *p=start;
	if(p->next==NULL)
	{
		return;
	}
	while(p->next->next!=NULL)
	{
		p=p->next;
	}
	p->next=NULL;
}
void display(link *start)
{
	link *p;
	p=start;
	while(p->next!=0)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}
int main()
{
	link *start;
	link *p;
	p=(link*)malloc(sizeof(link));
	int i,n;
	start=p;
	for(i=0;i<3;i++)
	{
       p->data=i;
       p->next=(link*)malloc(sizeof(link));
       p=p->next;
	}
	p->next=NULL;
	push(start,3);
	display(start);
	pop(start);
	pop(start);
	pop(start);
	pop(start);
	display(start);
	return 0;
}