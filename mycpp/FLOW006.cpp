#include<iostream>
using namespace std;
int main()
{
	
	int n,i,x;
	cin>>n;
	int a[n],sum[n];
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	sum[i]=0;
	while(a[i]!=0)
	{
	    x=a[i]%10;
		a[i]=a[i]/10;
		sum[i]=sum[i]+x;
	}
	}
	for(i=0;i<n;i++)
	{
		cout<<sum[i]<<"\n";
	}
return 0;
}