#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	long m,n,x,y,z,s,k;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>x>>y;
		z=0;
		s=0;
		while(x!=0)
		{
			m=x%10;
			x=x/10;
			z=z*10+m;
		}
		while(y!=0)
		{
			n=y%10;
			y=y/10;
			s=s*10+n;
		}
		z=z+s;
		k=0;
		while(z!=0)
		{
			s=z%10;
			z=z/10;
			k=k*10+s;
		}
		cout<<k<<"\n";
		
	}
	return 0;
}