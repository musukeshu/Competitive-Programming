#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,i,d=0;
		cin>>n;
		long int a[n+1];
		long int b[n+1];
		a[0]=0;
		b[0]=0;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(i=1;i<=n;i++)
		{
			cin>>b[i];
			if(a[i-1]==b[i-1]&&a[i]==b[i])
			{
				d=d+a[i];
			}
			a[i]=a[i-1]+a[i];
			b[i]=b[i-1]+b[i];
		}
		cout<<d<<endl;
	}
	return 0;
}
