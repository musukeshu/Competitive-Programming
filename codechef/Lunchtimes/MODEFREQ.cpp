#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n]={0};
		int b[11]={0};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}
		int max=0;
		int c[n]={0};
		for(int i=0;i<=10;i++)
		{
			if(b[i]>max)
			{
				max=b[i];
			}
			if(b[i]!=0)
			c[b[i]]++;
		}

		int max1=0,max2=0;
		for(int i=0;i<=max;i++)
		{
			if(c[i]>max1)
			{
				max1=c[i];
				max2=i;
			}
		}
		cout<<max2<<endl;
	}
}
