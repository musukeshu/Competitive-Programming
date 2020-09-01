#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int sum=0;
		int sum1=1;
		int flag=0;
		int max=1;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(i>0&&a[i-1]==a[i]&&a[i]==0)
			{
				sum1++;
			}
			else
			{
				if(sum1>max)
			{
				max=sum1;
				flag=0;
			}
			else if(sum1==max)
			{
				flag=1;
			}
				sum1=1;
			}
			
		}
	
		if(sum==n)
		{
			cout<<"No"<<endl;
			continue;
		}
		
		else 
		{
			if(max%2==0)
			{
				cout<<"No"<<endl;
			}
			else
			{
				if(max%2!=0&&flag==1)
				cout<<"No"<<endl;
				else
				{
					cout<<"Yes"<<endl;
				}
			}
		}
	}	
}
