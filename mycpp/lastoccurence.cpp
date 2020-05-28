#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,n;
	long  c,i;
	long q;
	long a[1000000];
	cin>>t;
	while(t--)
	{
	cin>>n;
    long b[1000000]={};
	for(i=0;i<n;i++)
	{
        cin>>a[i];  
		b[a[i]]=i+1; 
	}
	cin>>q;
	while(q--)
	{
		cin>>c;
		if(c>1000000)
		cout<<"-1"<<"\n";
		else if(b[c]!=0)
		cout<<b[c]<<"\n";
		else
		cout<<"-1"<<"\n";
	}
    }
    return 0;
}