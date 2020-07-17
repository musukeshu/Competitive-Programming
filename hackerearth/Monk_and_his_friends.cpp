#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,m,i,c,c1;
	scanf("%lld",&t);
	while(t--)
	{
		map<long long int,int> s;
		scanf("%lld %lld",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&c);
		s[c]++;
	}
	for(i=1;i<=m;i++)
	{
		scanf("%lld",&c1);
		if(s[c1]>0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		s[c1]++;
	}
	
	}
	
}
