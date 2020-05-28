#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,l,r,i,q;
	cin>>n>>q;
	long long a[n],b[n+1];
	b[0]=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=b[i-1]+a[i];
	}
	for(i=0;i<q;i++)
	{
		cin>>l>>r;
		cout<<(b[r]-b[l-1])/(-l+r+1)<<"\n";
	}
	return 0;
}