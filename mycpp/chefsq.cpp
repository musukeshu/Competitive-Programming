#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,f,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int s[n];
		for(i=0;i<n;i++)
		cin>>s[i];
		cin>>f;
		int fs[f];
		for(i=0;i<f;i++)
		cin>>fs[i];
		int j=0;
		for(i=0;i<n;i++)
		{
			if(s[i]==fs[j])
			{
				j=j+1;
			}
			if(j==f)
			{
				break;
			}
	}
	if(j<f)
	{
		cout<<"No\n";
	}
	else
	{
		cout<<"Yes\n";
	}
}
	return 0;
}