#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum=0,k,i;
		for(i=0;i<5;i++)
		{
			cin>>k;
			sum=sum+k;
		}if(sum==0)
		{
			cout<<"Beginner\n";
		}
		else if(sum==1)
		{
			cout<<"Junior Developer\n";
		}
		else if(sum==2)
		{
			cout<<"Middle Developer\n";
		}
		else if(sum==3)
		{
			cout<<"Senior Developer\n";
		}
		else if(sum==4)
		{
			cout<<"Hacker\n";
		}
		else
		{
			cout<<"Jeff Dean\n";
		}
	}
	return 0;
}