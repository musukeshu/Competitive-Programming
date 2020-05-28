#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,i,j,n,m,sum;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		long a[n],b[n],sum=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		b[0]=a[0];
		for(i=1;i<n;i++)
		{
			b[i]=b[i-1]+a[i];
		}
		if(m>0)
		{
			sum=(b[n-1]-b[m-1])-b[n-m-1];
			cout<<sum<<"\n";
		}
		if(m==0)
		{
			cout<<"0"<<"\n";
		}
	}
	return 0;
}