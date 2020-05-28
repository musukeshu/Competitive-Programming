#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,x,y,i,count=0;
	cin>>n>>x>>y;
	long a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
       if(a[i]>=x && a[i]<=y)
       	count++;
	}
	if(count>=n)
	{
		cout<<"YES";
	}
	else
		cout<<"NO";
	return 0;
}