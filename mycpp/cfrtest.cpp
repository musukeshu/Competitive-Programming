#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,t,count,i,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long int a[101]={0};
		count=0;
		for(i=0;i<n;i++)
		{
			cin>>k;
			if(a[k]!=1)
			{
				count++;
				a[k]=1;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}