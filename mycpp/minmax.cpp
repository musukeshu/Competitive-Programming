#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,max,min,sum;
	cin>>n;
	long long a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=0;
	sum=0;
	min=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(a[i]>a[max])
		{
			max=i;
		}
		if(a[i]<a[min])
		{
			min=i;
		}
	}
	cout<<sum-a[max]<<" "<<sum-a[min];
	return 0;
	
}
