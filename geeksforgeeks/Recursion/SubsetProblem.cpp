#include<bits/stdc++.h>
using namespace std;
void subsetProblem(string s, string curr, int i)
{
	if(i==s.length())
	{
		cout<<curr<<" ";
		return;
	}
	subsetProblem(s,curr,i+1);
	subsetProblem(s,curr+s[i],i+1);
}
int main()
{
	string s, curr="";
	int i=0;
	cin>>s;
	subsetProblem(s,curr,i);
}
