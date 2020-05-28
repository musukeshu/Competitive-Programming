#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,min,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		min=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
			}
		}
			
		cout<<min*(n-1)<<"\n";
	}
	return 0;

}