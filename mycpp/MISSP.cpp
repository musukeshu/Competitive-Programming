#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,k=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		int t[100001]={0};
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			t[a[i]]+=1;
		}
		for(i=1;i<=100000;i++)
		{
			if((t[i]%2)!=0)
			{
				cout<<i<<endl;
				break;
			}
		}

	}
	return 0;
}