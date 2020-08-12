#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t,h,p;
	cin>>t;
	while(t--)
	{
		cin>>h>>p;
		while(p>0&&h>0)
		{
			h=h-p;
			p=floor(p/2);
		}
		if(p>=0&&h<=0)
		{
			cout<<"1"<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
	}
	return 0;
}
