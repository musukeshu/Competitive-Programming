#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int a[5],p;
	while(t--)
	{
		int sum=0;
		for(int i=0;i<5;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		cin>>p;
		sum=sum*p;
		
		if(sum<=120)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}

