#include<bits/stdc++.h>
using namespace std;
int main()
{
	 char ch;
	 long t,n,id,i,q,flag,top,x,lastElement;
	 cin>>t;
	 while(t--)
	 {
	 	cin>>n>>id; 
	 	long stack[100100];
	 	top=0;
	 	stack[top]=id;
	 	for(i=0;i<n;i++)
	 	{
	 		cin>>ch;
	 		if(ch=='P')
	 		{
	 			flag=1;
	 			cin>>q;
	 			top++;
	 			stack[top]=q;
	 		}	
	 		else
	 		{
	 			if(flag==1)
	 			{
	 				lastElement=stack[top];
	 				top--;
	 				flag=0;
	 				x=0;
				}
	 			else
	 			{
	 				if(x%2==0)
	 				{
	 					top++;
	 					stack[top]=lastElement;
	 				}
	 				else
	 				{
	 					top--;
	 				}
	 				x=!x;
	 			}
	 		}
	 	}
	 	cout<<"Player "<<stack[top]<<endl;
	 }
}