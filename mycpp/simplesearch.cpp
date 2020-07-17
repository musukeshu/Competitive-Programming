#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long i,n,k;
	cin>>n;
	long long a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	for(i=0;i<n;i++)
	{
		if(k==a[i])
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
