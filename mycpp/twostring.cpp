#include<bits/stdc++.h>
using namespace std;
int main()
{
	long i;
	string s1,s2;
	int t;
	cin>>t;
	while(t--)
	{
		long a[150]={},b[150]={};
		cin>>s1>>s2;
		for(i=0;i<s1.size();i++)
		{
			a[s1[i]]++;
			b[s2[i]]++;
		}
		for(i=0;i<150;i++)
		{
			if(a[i]!=b[i])
			{
				break;
			}
		}
		if(i==150)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
}