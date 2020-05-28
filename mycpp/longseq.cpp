#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int i=0,j=0,count1=0,count2=0;
		while(s[j]!='\0')
		{
			if(s[i]==s[j])
			{
				count1++;

			}
			else
				count2++;
			j++;
		}
		if(count1==1||count2==1)
		{
			cout<<"Yes"<<endl;
		}
		else
			cout<<"No"<<endl;
	}
return 0;
}