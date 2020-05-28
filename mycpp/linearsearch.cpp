#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,e,i,c=0;
	cin>>n>>e;
	long a[n];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(e==a[i])
		{
			c=i+1;
		}
	}
	if(c==0)
	{
		cout<<"-1";
	}
	else
	{
		cout<<c;
	}
return 0;
}