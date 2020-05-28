#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int i;
	cin>>s;
	for(i=0;i<s.size();i++)
	{
  		if(s[i]!=s[s.size()-1-i])
  			break;
	}
	if(i==s.size())
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}