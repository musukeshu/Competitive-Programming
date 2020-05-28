#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	long int n,q,l,r,sum=0,sum1,i,j;
	scanf("%ld %ld",&n,&q);
	long int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
		sum+=a[i];
		b[i]=sum;
	}
	for(j=0;j<q;j++)
	{
		scanf("%ld %ld",&l,&r);
	    sum1=b[r-1]-b[l-1]+a[l-1];
		printf("%ld\n",sum1/(r-l+1));
	}


	return 0;
}
