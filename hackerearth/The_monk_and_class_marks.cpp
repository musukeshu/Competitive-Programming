#include<bits/stdc++.h>
using namespace std;
bool comparison(pair<int,string> p1, pair<int,string> p2)
{
	if(p1.first!=p2.first)
	{
		return p1.first>p2.first;
	}
	else
	{
		return p2.second>p1.second;
	}
}
int main()
{
	long int n,i,k;
	string s;
	cin>>n;
	vector<pair<int,string> > v;
	for(i=0;i<n;i++)
	{
		cin>>s>>k;
		v.push_back({k,s});
	}
	sort(v.begin(),v.end(),comparison);
	
	for(i=0;i<n;i++)
	{
		cout<<v[i].second<<" "<<v[i].first<<endl;
	}
	return 0;
}
