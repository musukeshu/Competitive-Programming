#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,count=0,temp;
	cin>>n;
	int v[n],p[n];
	for(i=0;i<n;i++)
	{
		cin>>v[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(v[j]>v[j+1])
			{
			    temp=v[j];
				v[j]=v[j+1];
				v[j+1]=temp;
			}
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(v[i]<p[i])
		{
			cout<<"No"<<"\n";
			break;
		}
		else 
			count++;
	}
	if(count==n)
	{
		cout<<"Yes";
	}
	return 0;
}