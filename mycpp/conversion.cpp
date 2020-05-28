#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	t=t+1;
	while(t--)
	{
		string s;
		getline(cin,s);
		for(i=0;i<s.length();i++)
		{
			if(s[i]==32)
			{
				cout<<"$";
			}
			else if(s[i]>=65&&s[i]<=90)
			{
				cout<<int(s[i])-64;
			}
			else
			{
				cout<<int(s[i])-96;
			}
		}
		cout<<"\n";
	}
}