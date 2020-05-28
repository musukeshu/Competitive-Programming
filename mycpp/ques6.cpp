#include<bits/stdc++.h>
using namespace std;
int main()
{
	long i,j,k,l,n;
	int t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		for(j=0;j<n;j++)
		{
			for(k=j;k<(n-1);k++)
			{
				cout<<" ";
			}
			for(l=1;l<(j+1)*2;l++)
			{
				cout<<"*";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	return 0;
}