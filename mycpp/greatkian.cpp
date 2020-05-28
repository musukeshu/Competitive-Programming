#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,sum=0,sum1=0,sum2=0;
	cin>>n;
	long long a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i+=3)
	{
		sum=sum+a[i];
		if((i+1)<n)
		sum1=sum1+a[i+1];
		if((i+2)<n)
		sum2=sum2+a[i+2];
	}
	cout<<sum<<" "<<sum1<<" "<<sum2;
return 0;
}