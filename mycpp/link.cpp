#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
	struct node* next;
	char data;
}link;
int main()
{
	int n;

	link* start=new link;
	link* ptr=new link;
	ptr=start;
	cout<<"Enter the number of nodes\n";
	cin>>n;
	char a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the"<<i+1<<" node data\n";
		cin>>a[i];
		ptr->next=new link;
		ptr->data=a[i];
		ptr=ptr->next;

	}
	ptr->data='0';
	ptr->next=NULL;
	ptr=start;
	cout<<"The complete list is\n";
	while(ptr->next!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	ptr=start;
	link* ptr1=new link;
	link* start1=new link;
	ptr1=start1;
	link* ptr2=new link;
	link* start2=new link;
	ptr2=start2;

	while(ptr->next!=NULL)
	{
		if(ptr->data>='A'&&ptr->data<='Z')
		{
			ptr1->data=ptr->data;
			ptr1->next=new link;
			ptr1=ptr1->next;
		}
		if(ptr->data>='a'&&ptr->data<='z')
		{
			ptr2->data=ptr->data;
			ptr2->next=new link;
			ptr2=ptr2->next;
		}
		ptr=ptr->next;

	}
	ptr1->data='0';
	ptr2->data='0';
	ptr1->next=NULL;
	ptr2->next=NULL;
	ptr1=start1;
	ptr2=start2;
	cout<<"\nThe linked list with Capital letters is\n";
	while(ptr1->next!=NULL)
	{
		cout<<ptr1->data<<" ";
		ptr1=ptr1->next;
	}
	cout<<"\nThe linked list with small letters is\n";
	while(ptr2->next!=NULL)
	{
		cout<<ptr2->data<<" ";
		ptr2=ptr2->next;
	}
	return 0;
}