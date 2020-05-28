#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,i,a=0,c=0,max,k=0,j=0;
	cin>>n;
	long long int b[n];
	cin>>b[0];
	max=0;
	for(i=1;i<n;i++)
	{
	cin>>b[i];
	if(b[i]==0)
	{
		if(b[i-1]!=0)
		{
			a=b[i-1];
			j=i-1;
		}
		else
			continue;
	}
	else
	{
		if(a==0)
		{
			a=b[i];
			j=i;
		}
		else
		{
			c=b[i];
			k=i;
		}
	}

	if(a>0 && c>0)
	{
		if(a>=c)
		{
			max+=c*(k-j-1);
		}
		else
		{
			max+=a*(k-j-1);
		}
		a=0;
		c=0;

	}
	
	}
	cout<<max;
}