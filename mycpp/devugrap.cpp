#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,k,i,op,ans;
		cin>>n>>k;
		op=0;
		int g[n];
		for(i=0;i<n;i++)
		{
			cin>>g[i];
			if(g[i]<k)
			{
				op=op+g[i];
			}
			else{
				ans=g[i]%k;
			if(ans>(k-ans))
			{
				op=op+k-ans;
			}
			else{
				op=op+ans;
			}
			}
			
		}
		cout<<op<<"\n";
	}
	return 0;
}