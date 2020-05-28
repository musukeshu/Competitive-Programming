#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100001];
	long n=0,i;
	scanf ("%[^\n]%*c",s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==32)
		{
			n++;
		}
	}
	cout<<n;
	return 0;
}