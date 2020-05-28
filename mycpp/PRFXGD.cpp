#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long int k,x,i,count;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		cin>>k>>x;
		i=0;
		count=0;
		int n[26]={0};
		while(s[i]!='\0')
		{
			if(n[int(s[i])-97]!=x)
			{
				n[int(s[i])-97]++;
				count++;
			}
			else if(n[int(s[i])-97]==x && k!=0)
			{
				k--;
			}
			else
				break;
			i=i+1;
			
		}
		cout<<count<<endl;

	}
}