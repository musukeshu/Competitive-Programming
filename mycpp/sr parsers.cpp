#include<bits/stdc++.h>
using namespace std;
int replace(string &stk,int top,char lhs,string rhs)
{
	cout<<"lhs="<<lhs<<" rhs="<<rhs<<" top"<<top<<" length"<<rhs.length()<<endl;
	top-=rhs.length();
	top++;
	stk[top]=lhs;
	return top;
}
void displayStack(string stk,int top)
{
	for(int i=0;i<=top;i++)
	{
		cout<<stk[i];
	}
	cout<<endl;
}
int reduce(int n,char lhs[],string rhs[],string &stk,int top)
{
	set <int> s;
	for(int i=0;i<n;i++)
		s.insert(i);
	int lastIndex=1;
	while(lastIndex<=top+2 && s.begin()!=s.end())
	{
		cout<<"lastIndex="<<lastIndex<<endl;
		vector <int> remove;
		for(set <int> ::iterator it=s.begin();it!=s.end();it++)
		{
			if(rhs[*it].length()- lastIndex==-1)
			{
				cout<<"replacing"<<rhs[*it]<<endl;
				displayStack(stk,top);
				top=replace(stk,top,lhs[*it],rhs[*it]);
				displayStack(stk,top);
				return top;
			}
			if(stk[top- lastIndex+1]!=(rhs[*it][rhs[*it].length()-lastIndex]))
				remove.push_back(*it);
		}
		for(vector <int> :: iterator it=remove.begin();it!=remove.end();it++)
		{
			cout<<"erasing "<<*it<<endl;
			s.erase(*it);
		}
		lastIndex++;
	}
	return top;
}

int main()
{
	int n;
	cin>>n;
	char lhs[n];
	string rhs[n];
	for(int i=0;i<n;i++)
	{
		cin>>lhs[i];
		cin>>rhs[i];
	}
	string inp;
	cin>>inp;
	int i=0;
	string stk="                        ";
	int top=-1;
	while(i!=inp.length())
	{
		top++;
		stk[top]=inp[i];
		displayStack(stk,top);
		int tempTop=2;
		while(tempTop--)
			top=reduce(n,lhs,rhs,stk,top);
		displayStack(stk,top);
		i++;
	}
	if(top==0 && stk[0]==lhs[0])
		cout<<"Accepted"<<endl;
	else
		cout<<"Rejected"<<endl;
}
		
