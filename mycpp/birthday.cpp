#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,m,n,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	cin>>n>>m;
	if(m%n==0&&m!=0)
	cout<<"Yes \n";
	else
	cout<<"No\n";
	
	}
	return 0;
}