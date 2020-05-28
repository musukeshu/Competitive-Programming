#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,n,k,i,min;
	cin>>t;
	while(t--)
	{
	cin>>n>>k;
	long a[n];
	cin>>a[0];
	min=a[0];
	for(i=1;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<min)
		{
		min=a[i];
		}
	}
	cout<<k-min<<"\n";
	}	
	return 0;
}