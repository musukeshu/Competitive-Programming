#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,i,j,v;
	cin>>n;
	long long r[n];
	for(i=0;i<n;i++)
	{
		cin>>r[i];
	}

	for(i=0;i<n;i++)
	{
		v=0;
		for(j=i+1;j<n;j++)
		{
			if(r[j]<r[i])
				v++;
		}
		cout<<v<<" ";
	}
}