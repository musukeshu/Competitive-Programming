#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,n,i,sumb,countb,countc,sumc;
	cin>>t;
	while(t--)
	{
		cin>>n;
		
    	long a[n],b[n]={0},c[n]={0};
    	sumb=0;
     	sumc=0;
	    countb=0;
    	countc=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		a.sort();
		cout<<a<" ";	
	}
	return 0;
}
