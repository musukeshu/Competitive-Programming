#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,q,c,l,r,i;
	cin>>n>>q;
	long a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(q--)
	{
		cin>>c;
		if(c/10==1&&c/100>10)
		{
			!(a[(c%10)-1]);
		}
		else
		{
			l=(c/10)%10;
			r=c%10;
			if(a[r-1]==0)
			{
				cout<<"EVEN\n";
			}
			else
			{
				cout<<"ODD\n";
			}
		}
	}
	return 0;
}