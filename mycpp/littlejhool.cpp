# include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i,z;
	for(i=0;i<s.length();i++)
	{

			z=0;
			
			while(i<s.length())
			{
				if(s[i]=='0')
				{
					i=i+1;
					z=z+1;
				}
				else 
					break;
			}
			if(z>=6)
			{
				cout<<"Sorry, sorry!";
				return 0;
			}
			z=0;
			while(i<s.length())
			{
				if(s[i]=='1')
				{
					i=i+1;
					z=z+1;
				}
				else 
					break;
			}
			if(z>=6)
			{
				cout<<"Sorry, sorry!";
				return 0;
			}
			i=i-1;
		
	}
	cout<<"Good luck!";
return 0;
}