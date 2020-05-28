#include<bits/stdc++.h>
using namespace std;
long int top=-1;
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
void push(char stack[], char x)
{
	{
		top=top+1;
		stack[top]=x;
	}
}
int pop(char stack[],char x)
{
	if(isEmpty())
	{
		top=-2;
	}
	else
	{
		if (x==')' && stack[top]=='(')
			top=top-1;
		else if (x==']' && stack[top]=='[')
			top=top-1;
		else if(x=='}' && stack[top]=='{')
			top=top-1;
		else
			top=-2;

	}
	return top;
}
int main()
{
	long int t,i;
	string s;
	char stack[1000];
	cin>>t;
	while(t--)
	{
		cin>>s;
		i=0;
		while(s[i]!='\0')
		{
			if(s[i]=='('||s[i]=='{'||s[i]=='[')
			{
				push(stack,s[i]);
			}
			else 
			{
				int p=pop(stack,s[i]);
				if(p==-2)
				{
					break;
				}
			}
			i++;
		}
		if(top==-1)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
		top=-1;
	}
	return 0;
}