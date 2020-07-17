#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k,t,count=0;
	string str,s;
	cin>>n;
	cin>>str;
	t=0;
	while(t!=n)
	{
		s=str;
		for(i=t+1;i<n;i++)
		{
			if(s[t]==s[i])
			{
				int c=0;	
			}	
			else
			{
				continue;
			}
			for(j=t+1;j<i;j++)
			{
				for(k=i+1;k<n;k++)
				{
					if(s[j]==s[k])
					{
						count++;
					}
				}
			}
		}	
		t++;
	}
	cout<<count;
	return 0;
}
