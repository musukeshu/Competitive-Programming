#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,i;
	long a,n,j;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a>>n;
		int o[n];
		for(j=0;j<n;j++)
		{
			cin>>o[j];
			if(o[j]==0)
			{
				a--;
			}
			if(o[j]==1)
			{
				a+=2;
			}
			
			if(a<=0&&j<n-1)
			{
				cout<<"No "<<j+1<<"\n";
				break;
			}
			if(a>=0&&j==n-1)
			{
				cout<<"Yes "<<a<<"\n";
			}
		}

	}
	return 0;
}