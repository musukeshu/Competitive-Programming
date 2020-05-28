#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,a[26],b[26],c[11],i;
	string s,s1="hackerearth";
	cin>>n;
	cin>>s;
	for(i=0;i<26;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	for(i=0;i<11;i++)
	{
		b[s1[i]-97]++;
	}
	for(i=0;i<n;i++)
	{
		a[s[i]-97]++;
	}
	c[0]=a[s1[0]-97]/b[s1[0]-97];
	long min=c[0];
    for(i=0;i<11;i++)
    {
    	c[i]=a[s1[i]-97]/b[s1[i]-97];
    	if(c[i]<=min)
    	{
    		min=c[i];
    	}
    }
    cout<<min;
    return 0;
}