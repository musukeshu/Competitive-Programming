#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,count=0;
		cin>>n;
		char b[n]={'G'};
		char s[n];
		for(i=0;i<n;i++)
		{
			cin>>s[i];
		}
		for(i=0;i<n;i++)
		{
			if(s[i]=='A')
			{
				b[i]='T';
				count++;
			}
			else if(s[i]=='T')
			{
				b[i]='A';
				count++;
			}
			else if(s[i]=='G')
			{
				b[i]='C';
				count++;
			}
			else if(s[i]=='C')
			{
				b[i]='G';
				count++;
			}
			
			else
			{
				cout<<"Error RNA nucleobases found!\n";
				break;
			}
		}
		if(count==n)
		{
			for(i=0;i<n;i++)
			{
				cout<<b[i];
			}
			cout<<"\n";
		}
	}
	return 0;
}