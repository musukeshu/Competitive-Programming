#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long  int t,b,n,k,z,i,sum;
	scanf("%lld",&t);
	while(t--)
	{
		sum=0;
		scanf("%lld %lld",&n,&k);
		priority_queue<long long int> pq;
		for(i=1;i<=n;i++)
		{
			scanf("%lld",&b);
			pq.push(b);
		}
		for(i=1;i<=k;i++)
		{
			z=pq.top();
			sum=sum+z;
			z=floor(z/2);
			pq.pop();
			pq.push(z);
		}
		printf("%lld\n",sum);
	}
}
