#include<bits/stdc++.h>
using namespace std;
int facto(int n)
{
	int fact1[30]={};
	if(n==0||n==1)
	{
		return 1;
	}
	else if(fact1[n]!=0)
		{
			return fact1[n];
		}
	else
	{
		fact1[n]=facto(n-1)*n;
	}
	return fact1[n];
}
int main()
{
	int t;
	int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<facto(n)<<endl;
	}
}