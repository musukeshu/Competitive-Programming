#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,R;
	cin>>n;
	cin>>r;
	while(n--)
	{
		cin>>R;
		if(R>=r)
		{
			cout<<"Good boi\n";
		}
		else 
		{
			cout<<"Bad boi\n";
		}
	}
	return 0;
}