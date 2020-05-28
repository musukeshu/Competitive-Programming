#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,m,n,k,d;
	cin>>t;
	while(t--)
	{
		cin>>m>>n>>k;
		if(m==n)
		{
			if(k%2==0)
			{
				d=0;
			}
			else
			{
				d=1;
			}
		}
		else
		{
			if(abs(m-n)==k)
			{
				d=0;
			}
			else if(abs(m-n)>k)
			{
				d=abs(m-n)-k;
			}
			else
			{
				if((k-abs(m-n))%2==0)
				{
					d=0;
				}
				else
				{
					d=1;
				}	
					

			}
		}
		cout<<d<<endl;
	}
	return 0;
}