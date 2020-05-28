#include<bits/stdc++.h>
using namespace std;
#define max 3
int top=-1;
int size()
{
	return top+1;
}
bool isEmpty()
{
	if(top==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void push(int stack[], int x)
{
	if(top==max-1)
	{
		cout<<"Stack overflow\n";
	}
	else
	{
		top=top+1;
		stack[top]=x;
	}
}
void pop(int stack[])
{
	if(isEmpty())
	{
		cout<<"Stack Underflow\n";
	}
	else
	{
		top=top-1;
	}
}
int main()
{
	int stack[max];
	push(stack,1);
	push(stack,2);
	push(stack,3);
	push(stack,4);
	
	cout<<"The top of stack is "<<stack[top]<<"\n";
	cout<<"The current size of stack is "<<size()<<"\n";
	pop(stack);
	cout<<"The top of stack is "<<stack[top]<<"\n";
	cout<<"The current size of stack is "<<size()<<"\n";
	pop(stack);
	cout<<"The top of stack is "<<stack[top]<<"\n";
	cout<<"The current size of stack is "<<size()<<"\n";
	return 0;

}