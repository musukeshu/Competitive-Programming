#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,n,m,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		long a[n],b[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		 for(i=0;i<n;i++)
		 {
		 	b[(i+m)%(n)]=a[i];
		 }
		 for(i=0;i<n;i++)
		 cout<<b[i]<<" ";
		cout<<"\n";
	}
	return 0;
}