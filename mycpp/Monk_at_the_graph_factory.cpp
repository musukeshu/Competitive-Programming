#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	int count=0;
	cin>>n;
	while(n--)
	{
		cin>>x;
		if(x%2==0 || x==1)
			count++;

	}
	if(count==n-1)
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}
	return 0;
}