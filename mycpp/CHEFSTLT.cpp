#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,min,max;
	string s1,s2;
	cin>>t;
	while(t--)
	{
		cin>>s1;
		cin>>s2;
		min=0;
		max=0;
		i=0;
		while(s1[i]!='\0')
		{
			if(s1[i]=='?'&& s2[i]=='?')
			{
				max+=1;
			}
			else if(s1[i]=='?'||s2[i]=='?')
			{
				max+=1;
			}
			else
			{
				if(s1[i]!=s2[i])
				{
					min+=1;
					max+=1;
				}
			}
			i=i+1;
		}
		cout<<min<<" "<<max<<endl;
	}
}