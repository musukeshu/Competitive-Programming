#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,i,j,min;
	cin>>n>>x;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<x;i++)
	{
		min=i;
		for(j=i;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}