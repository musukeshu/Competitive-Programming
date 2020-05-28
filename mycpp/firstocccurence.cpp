#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int b[150]={0},i;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			if(b[s[i]]>0)
			{
				continue;
			}
			else
			{
				cout<<s[i];
				b[s[i]]++;
			}
		}
		cout<<"\n";
	}
}