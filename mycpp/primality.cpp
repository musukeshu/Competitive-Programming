#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,flag,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		flag=0;
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"no\n";
		else
			cout<<"yes\n";
	}
	return 0;
}
