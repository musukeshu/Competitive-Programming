#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int k,i;
	cin>>s>>k;
	for(i=0;i<k;i++)
	{
		if(s[i]!='9')
		{
		   s[i]='9';
		}
		else
		{
		    k=k+1;
		}
	}
	cout<<s;
	return 0;

}