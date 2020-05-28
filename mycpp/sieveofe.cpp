#include<bits/stdc++.h>
using namespace std;
int main()
{
	long i,n,j;
	long c=0;
	cin>>n;
	char a[n];
	for(i=0;i<n;i++)
	{
		a[i]='0';
	}
	for(i=2;i<n;i++)
	{
		if(a[i]=='0')
		{
			for(j=i+i;j<n;j+=i)
			{
				c++;
				a[j]='1';
			}
		}
	}
	for(i=2;i<n;i++)
	{
		if(a[i]=='0')
		{
			cout<<i<<" ";
		}
	}
	cout<<"\n"<<c;
	return 0;
}