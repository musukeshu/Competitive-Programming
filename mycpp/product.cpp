#include<bits/stdc++.h>
#define MOD 1000000007;
using namespace std;
int main()
{
	int n,i,a[1000];
	long int ans;
	cin>>n;
	for(i=0;i<n;i++)
	{
	  cin>>a[i];
	}
	ans=1;
	for(i=0;i<n;i++)
	{
		ans=(ans*a[i])%MOD;
	}
	cout<<ans;
 return 0;
}