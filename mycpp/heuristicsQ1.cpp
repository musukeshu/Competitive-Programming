#include<bits/stdc++.h>
using namespace std;
int main()
{
	long a,i,sum,t;
	cin>>t;
	while(t--)
	{
		cin>>a;
		sum=0;
		for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				if(a/i==i)
				sum=sum+i;
			else
				sum=sum+i+a/i;
			}
		}
		cout<<sum+1<<"\n";
	}
	return 0;
}