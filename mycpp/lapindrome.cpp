#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	int t,l,i;
	string s;
	int mid;
	
	
	cin>>t;
	while(t)
	{

		cin>>s;
		cout<<endl;
		l=s.length();
		string right,left;
			if(l%2==0)
			{
				 mid=l/2;
				
			}
			else
			{
				 mid=l/2+1;
				
			}
			left=s.substr(0,l/2);
			right=s.substr(mid,l/2);
			sort(left.begin(),left.end());
			sort(right.begin(),right.end());

			if(left==right)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		t--;
	}
	
	

	return 0;
}