#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	int i,j,n,s,k;
	long int a[2000];
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]<a[i])
			{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=5-k)
			break;
	}
	s=n-i;
	cout<<s/3;
	return 0;
}