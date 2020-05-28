#include<bits/stdc++.h>
using namespace std;
int main()
{
	long i, add,j,t;
	string s;
	string s1,s2;
	cin>>t;
	for(j=0;j<t;j++)
	{
		cin>>s;
		add=0;
		for(i=0;i<s.length();i++)
		{
	  		s1[i]=s[s.length()-i-1];
	  		add=s[i]+s1[i]-96-96;
	  		if(add>26)
	  		 	add=add-26;
	 		s2[i]=add+96;
	 		cout<<s2[i];
    	}
        cout<<"\n";
   	}
 return 0;
}