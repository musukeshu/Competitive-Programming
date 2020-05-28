#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,i,j,sum,l,mil,n;
	cin>>t;
	for(i=0;i<t;i++)
	{
		sum=0;
		cin>>n;
		long a[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
			if(a[j]!=0)
			{
				l=j+1;
			}
			sum=sum+a[j];
		}
		cin>>mil;
		if(mil==0)
		{
			cout<<"0"<<endl;
			continue;
		}
		mil=mil%sum;
		if(mil==0)
		{
			cout<<l<<endl;
			continue;
		}
		sum=0;
		j=0;
		while(mil>sum)
		{
			sum=sum+a[j];
			j++;
		}
		cout<<j<<endl;
	}
	return 0;
}