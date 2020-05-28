#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		int i;
		cin>>s;
		int c=0;
		for(i=0;i<s.length();i++)
		{
			if(s[i]!=s[s.length()-i-1])
			{
				cout<<"NO"<<"\n";
				break;
			}
			else
			{
				c++;
			}
		}
		if(c==s.length())
		{
			if(c%2==0)
				cout<<"YES EVEN"<<"\n";
			else
				cout<<"YES ODD"<<"\n";
		}

	}
}