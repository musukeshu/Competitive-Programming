#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int a=0,b=0,c=0,i;
	string s;
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='(')
		{
			a++;
	    }
		else if(s[i]==')')
		{
			a--;
		}
		else if(s[i]=='{')
		{
			b++;
		}
		else if(s[i]=='}')
		{
			b--;
		}
		else if(s[i]=='[')
		{
			c++;
		}
		else
		{
			c--;
		}
	}

	if(a==0&&b==0&&c==0)
		cout<<"YES";
	else
		cout<<"NO";
}