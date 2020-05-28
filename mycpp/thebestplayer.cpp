#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,m,i,j;
	cin>>n>>m;
	long q[n];
	string s[n];
	for(i=0;i<n;i++)
	{
		cin>>s[i];
		cin>>q[i];
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(q[j]>q[j+1])
			{
				int temp=q[j];
				q[j]=q[j+1];
				q[j+1]=temp;
				string temp1=s[j];
				s[j]=s[j+1];
				s[j+1]=temp1;
			}
			if(q[j]==q[j+1])
			{
				if(std::string(s[j])<std::string(s[j+1]))
				{
				int temp=q[j];
				q[j]=q[j+1];
				q[j+1]=temp;
				string temp1=s[j];
				s[j]=s[j+1];
				s[j+1]=temp1;
				}

			}
		}
	}
	for(i=n-1;i>=n-m;i--)
	{
		cout<<s[i];
		cout<<"\n";
	}
	return 0;
}