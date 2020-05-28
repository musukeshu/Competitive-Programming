#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,x,c,d;
	cin>>n>>k>>x;
	int a[n+1]={};
	c=n;
	while(c>1)
	{
		d=x%k;
		if(d>=c)
		{
			break;
		}
		c-=d;
		while(1)
		{
			x++;
			x=x%(n+1);
			if(x==0)
			{
				x=1;
			}
			if(a[x]==0)
			{
				break;
			}
		}
		while(d)
		{
			if(a[x]==0)
			{          0)
			{  
				x=1;
			}
		}
	}
	cout<<x<<endl;
}      