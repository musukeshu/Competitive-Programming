#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
	int data;
	struct node *next;
}link;
void display(link *start)
{
	int i,count=0;
	link *p;
	p=start;
	if(start==NULL)
	{
		cout<<"Empty linked list\n";
	}
	else
	{

	while(p->next!=NULL)
	{
       cout<<p->data<<" "<<p->next<<endl;
       p=p->next;
       count++;
	}
	cout<<p->data<<" "<<p->next;
	cout<<"\n"<<count+1<<"\n";
	}
	p=start;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	cout<<p;
}
void search(link *start,int x)
{
	link *p=start;
	int count=0;
	if(start->next==NULL)
	{
		cout<<"Empty linked list\n";
	}
	else
	{
		while(p!=NULL)
		{
			count++;
			if(p->data==x)
			{
				cout<<"Data found at "<<count<<" node\n";
				return;
			}
			p=p->next;
			if(p==NULL)
			{
				cout<<"Data not found\n";
			}
		}

	}
}
void address(link *start)
{
	link *p=start;
	while(p->next->next!=NULL)
	{
		p=p->next;
	}
	cout<<p;
}
int main()
{
	link *start;
	link *p;
	p=(link*)malloc(sizeof(link));
	int i,n;
	start=p;
	for(i=0;i<2;i++)
	{
       p->data=i;
       p->next=(link*)malloc(sizeof(link));
       p=p->next;
	}
	p->data=i;
	p->next=NULL;
	cin>>n;
	switch(n)
	{
		case 1:
		{
			display(start);
			break;
		}
		case 2:
		{
			search(start,1);
			search(start,0);
			search(start,2);
			search(start,3);
			break;
		}	
		case 3:
		{
			address(start);
			break;
		}
		default:
		break;
	}
	
return 0;
}