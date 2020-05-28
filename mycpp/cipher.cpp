#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,i,z;
	string s;
	cin>>s>>n;
	z=n;
	for(i=0;i<s.length();i++)
	{
		if(s[i]>=65&&s[i]<=90)
		{
			n=z%26;
 			s[i]=((s[i]+n)%91);
 			if(s[i]<25&&s[i]>=0)
 				s[i]=s[i]+65;
 			

		}
		else if(s[i]>=97&&s[i]<=122)
		{
			n=z%26;
			s[i]=((s[i]+n)%123);
			if(s[i]<25&&s[i]>=0)
			{
				s[i]=s[i]+97;
			}
			
		}
		else if(s[i]>=48&&s[i]<=57)
		{
			n=z%10;
			s[i]=((s[i]+n)%58);
			if(s[i]>=0&&s[i]<10)
			{
				s[i]=s[i]+48;
			}
		}
		else
			s[i]=s[i];

	}
	cout<<s;
	return 0;
}