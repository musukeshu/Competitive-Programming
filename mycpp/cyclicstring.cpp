#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100000];
	int t,i;
	long y,z;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>s;
		y=strlen(s);
		z=y*(y+1)/2;
		cout<<z<<"\n";
	}
	return 0;
}