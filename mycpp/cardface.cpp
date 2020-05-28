#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,q,a,b,count,i;
	int ch;
	cin>>n>>q;
	long c[n]={0};
	while(q--)
	{
		count=0;
    	cin>>ch>>a>>b;
    	if(ch==0)
    	{
    		for(i=a;i<=b;i++)
    		{
    			if(c[i]==0)
    			{
    				c[i]=1;
    			}
    			else
    				c[i]=0;
    		}
    	}
    	else
    	{    		
    		for(i=a;i<=b;i++)
    		{
    			if(c[i]==1)
    			{
    				count++;
    			}
    		}
    		cout<<count<<"\n";
    	}
    	
	}
	return 0;

}