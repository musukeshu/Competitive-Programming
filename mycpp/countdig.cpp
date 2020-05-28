#include<bits/stdc++.h>
using namespace std;
int main()
{
	long i,j,t,count=0,n;
	string s;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		cin>>s;
		count=0;
		for(j=0;j<n;j++)
		{
			if(s[j]>=48&&s[j]<=57)
			{
				for(j;j<n;j++)
				{
					if(s[j]>57||s[j]<48)
					{
						break;
					}
				}
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}