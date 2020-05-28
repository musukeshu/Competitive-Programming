#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,m1,n1,n,t,T;
	cin>>T;
	while(T--)
	{
	cin>>m1>>n1;
	m=m1;
	n=n1;
	t=1;
	while(t>0)
		{
			t=m%n;
			m=n;
			n=t;
		}
		cout<<(m1/m)*(n1/m)<<"\n";
	}
return 0;
}