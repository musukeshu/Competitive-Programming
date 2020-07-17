#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	int  c,q,i;
	int a[100000];
	cin>>t;
	long b[1000000];
	while(t--)
	{
	
	b[1000000]={0};
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]]=i;
	}
	cin>>q;
	while(q--)
	{
		cin>>c;
		if(b[c]!=0)
		cout<<b[c]+1<<"\n";
		else
		cout<<"-1"<<"\n";
	}
    }
    return 0;
}
