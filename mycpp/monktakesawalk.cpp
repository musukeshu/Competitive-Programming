#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,count,i;
	string s;
	cin>>t;
	while(t--)
	{
		count=0;
		cin>>s;
		for(i=0;i<s.size();i++)
		{
			if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			{
				count++;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
