#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
	long long n,m,j;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		long long a[n],b[n+1],k;
		b[0]=0;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
			b[j+1]=b[j]+a[j];
		}
		cin>>m;
		k=0;
		for(j=1;j>=1;j++)
		{
			if((j*b[n])<=m)
		    {
		         k=j;
			    continue;
			}
			else
			{
			  for(j=1;j>=1;j++)
			  {
			      if(k>0)
			      if((k*b[n]+b[j])>=m)
			      {
			          cout<<j<<"\n";
			          break;
			      }
			      if(k==0)
			      {
			          if(b[j]>=m)
			          {
			              cout<<j<<"\n";
			              break;
			          }
			      }
			  }
			  break;
			}
		}
	}
	return 0;
}