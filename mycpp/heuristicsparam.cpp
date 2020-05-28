#include<bits/stdc++.h>
using namespace std;
int main()
{
	long i,n,j,a,b,t;
	long count=0;
	char c[1000000];
	cin>>t;

	while(t--)
	{
	cin>>a>>b>>n;
	
	for(i=0;i<b;i++)
	{
		c[i]='0';
	}
	int k=0;
	long d[1000]={0};
	for(i=2;i<=b;i++)
	{
		if(c[i]=='0')
		{
		if(i>=a)
		{
		   d[k]=i;
		   k++;
		}	
		for(j=i+i;j<b;j+=i)
			{
			   
				count++;
				c[j]='1';
			}
		}
	}
	if(d[n-1]==0)
	cout<<"-1"<<"\n";
	else
	{
	cout<<d[n-1]<<"\n";
	}
	}
	return 0;
}